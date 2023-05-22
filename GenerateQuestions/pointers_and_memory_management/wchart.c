#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); // Configura a localização para a localização do sistema
    wchar_t myChar = L'á'; // Caractere ampliado 'á'

    wprintf(L"Caractere ampliado: %lc\n", myChar);

    return 0;
}
