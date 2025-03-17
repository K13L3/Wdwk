.data
message: .asciz "Podaj n: "
input: .asciz "%d"
output: .asciz "Wynik: %d\n"
n_value: .long 0
result:  .long 0


.text
.global main
.extern scanf, printf

main:
# Przygotowanie stosu
pushq %rbp
movq %rsp, %rbp

# Wypisanie komunikatu "Podaj n: "
leaq message(%rip), %rdi
movq $0, %rax
call printf

# Pobranie n od użytkownika
leaq input(%rip), %rdi   # Format "%d"
leaq n_value(%rip), %rsi  # Adres zmiennej n_value
call scanf

# Wczytane wartości
movl n_value(%rip), %eax   # n
movl %eax, %ebx                # ebx = n
movl %eax, %ecx                # ecx = n

# Obliczanie n^3 (n * n * n)
imull %eax, %eax               # n * n
imull %ebx, %eax               # n^3

# Obliczanie (3 * n * n)
imull %ecx, %ecx               # n * n
imull $3, %ecx                 # 3 * n^2
addl %ecx, %eax                # n^3 + 3n^2

# Obliczanie - (2 * n)
imull $2, %ebx                 # 2 * n
subl %ebx, %eax                # n^3 - 3n^2 - 2n

# Wypisanie wyniku
leaq output(%rip), %rdi
movl %eax, %esi
movq $0, %rax
call printf

# Zakończenie programu
movq $0, %rax
movq %rbp, %rsp
popq %rbp
ret
