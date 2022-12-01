#include <stdio.h>
#define TAM 20

void pedirCadena(char *cad);
void compararCadenas(char *c1, char *c2);

int main() {
    char cad1[TAM];
    char cad2[TAM];
    printf("Introduzca la cadena 1: ");
    pedirCadena(cad1);
    printf("Introduzca la cadena 2: ");
    pedirCadena(cad2);
    compararCadenas(cad1,cad2);
    return 0;
}

void pedirCadena(char *cad){
    scanf("%[^\n]", cad);
    fflush(stdin);
}

void compararCadenas(char *c1, char *c2){
    int tam1=0, tam2=0;
    int i=0;
    while (c1[i]!='\0'){
        tam1+=(int)c1[i];
        i++;
    }
    i=0;
    while (c2[i]!='\0'){
        tam2+=(int)c2[i];
        i++;
    }
    if (tam1>tam2)
        printf("\nLa primera cadena es superior, alfabeticamente, a la segunda.");
    else if (tam1==tam2)
        printf("\nLas dos cadenas son, alfabeticamente, iguales.");
    else
        printf("\nLa primera cadena es inferior, alfabeticamente, a la segunda.");
}
