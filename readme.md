# Algorytmy_laboratoria

Repozytorium zawiera rozwiązane zadania z przedmiotu algorytmy i struktury danych (LAB).

Status rozwiązywania zadań ze wszystkich laboratoriów:

- LAB2 (18.10.2023) - 7/7 - **100%**
- LAB3 (25.10.2023) - 7/7 - **100%**
- LAB4 (08.11.2023) - 6/6 - **100%**
- LAB5 (15.11.2023) - 2/2 - **100%**
- LAB6 (22.11.2023) - 2/2 - **100%**
- LAB7 (29.11.2023) - 1/1 - **100%**
- LAB8 (11.12.2023) - 2/2 - **100%**
- LAB9 (13.12.2023) - 1/1 - **100%**

## Instrukcja uruchamiania poszczególnych zadań:

Aby wykonać dane zadanie należy uruchomić je z danej przestrzeni nazw w pliku main.cpp.
Przykład:

```c++
#include "zadania.h"

int main() {
    zadania_18_10_2023::zad_6();
    return 0;
}
```

## Projekt można uruchomić na Replit

[![Run on Repl.it](https://replit.com/badge/github/Tsugumik/Algorytmy_laboratoria)](https://replit.com/new/github/Tsugumik/Algorytmy_laboratoria)

### Uruchamianie testów na Replit

Jeśli podczas kompilacji projektu nie pojawią się błędy lub inne ostrzeżenia dotyczące GoogleTest można przystąpić do
uruchomienia testów.

Aby uruchomić test należy (po skompilowaniu projektu) przejść do zakładki shell i wykonać polecenie:

```shell
./Tests
```

Jeśli pojawi się informacja, że dany plik nie istnieje, oznacza to, że kompilacja testów z jakiegoś powodu się nie
powiodła. Szczegółowe informacje będą zawarte w logach CMake'a.

## Instrukcja budowania i uruchamiania na Linuksie

```shell
git clone https://github.com/Tsugumik/Algorytmy_laboratoria
cd Algorytmy_laboratoria

# Należy wybrać zadanie do uruchomienia w pliku main.cpp

cmake CMakeLists.txt
make
./Algorytmy_laboratoria
```
