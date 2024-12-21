#include <stdio.h>
#include <stdlib.h>

void quitaespacios(char *cadena, char *cadenasin) {
    int j = 0;
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] != ' ') { 
            cadenasin[j] = cadena[i];
            j++;
        }
    }
    cadenasin[j] = '\0';
}

int main() {
    int tam;
    printf("¿Cuántos caracteres tendrá la cadena? ");
    scanf("%d", &tam);

    char *cadena = (char *)malloc((tam + 1) * sizeof(char));
    char *cadenasin = (char *)malloc((tam + 1) * sizeof(char));

    fgets(cadena, tam + 1, stdin);

    quitaespacios(cadena, cadenasin);

    printf("Cadena sin espacios: %s\n", cadenasin);

    free(cadena);
    free(cadenasin);
    return 0;
}
