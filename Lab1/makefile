# Nazwa pliku wykonywalnego
TARGET = program

# Plik źródłowy asemblera
SRC = p.s

# Plik obiektowy
OBJ = p.o

# Flagi kompilatora i linkera
ASFLAGS = -g  # Opcjonalnie: -g dla debugowania
LDFLAGS = -no-pie -lc

# Reguła główna (domyślna)
all: $(TARGET)

# Kompilacja pliku asemblerowego do pliku obiektowego
$(OBJ): $(SRC)
	as $(ASFLAGS) -o $(OBJ) $(SRC)

# Linkowanie pliku obiektowego do pliku wykonywalnego
$(TARGET): $(OBJ)
	gcc $(LDFLAGS) -o $(TARGET) $(OBJ)

# Czyszczenie plików pośrednich
clean:
	rm -f $(OBJ) $(TARGET)
