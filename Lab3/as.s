.data
.extern arr,arrSorted,arrRevesed
message: .string "Czas wykonania: %lu\n"

.text
.extern quickSort, printArr #printArr wykorzystywane podczas testowania poprawnosci dzialania algorytmu
.global main

main:

# Inicjalizacja stosu
pushq %rbp
movq %rsp, %rbp

# Pomiar czasu - start
rdtsc
shlq $32, %rdx
orq %rdx, %rax
movq %rax, %r8  # Zapisz wartość początkową

#Przekaznie argumentow do quickSort
leaq arr(%rip), %rdi
movl $0, %esi
movl $99, %edx
call quickSort

# Pomiar czasu - koniec
rdtsc
shlq $32, %rdx
orq %rdx, %rax
subq %r8, %rax  # Oblicz czas wykonania

# Wyświetlenie wyniku
movq %rax, %rsi
leaq message(%rip), %rdi
movl $0, %eax
call printf


# Zakończenie programu
movl $0, %edi
call exit
