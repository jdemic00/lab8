#include <stdio.h>
#include <string.h>

void invierte(char *cadenaOrigen, char *cadenaDestino){
    int longitud = strlen(cadenaOrigen);
    int j = 0; 
    for (int i = longitud - 1; i >= 0; i--) {
        cadenaDestino[j] = cadenaOrigen[i];
        j++;
    }
    cadenaDestino[j] = '\0';
}

int main() {
    char cadena[101];
    char cadenaInvertida[101];

    fgets(cadena, 101, stdin);

    invierte(cadena, cadenaInvertida);

    printf("Cadena invertida: %s\n", cadenaInvertida);

    return 0;
}
