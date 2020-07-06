#include <stdio.h>

int I = 1121;
char C = 99;
long L = 92818141;
short S = 392;
double D = 0.4f;

int main(){
    printf("Zmienna INT w pamieci znajduje sie na pozycji: %p i ma rozmiar %d\n", &I, sizeof(I));
    printf("Zmienna CHAR w pamieci znajduje sie na pozycji: %p i ma rozmiar %d\n", &C, sizeof(C));
    printf("Zmienna LONG w pamieci znajduje sie na pozycji: %p i ma rozmiar %d\n", &L, sizeof(L));
    printf("Zmienna SHORT w pamieci znajduje sie na pozycji: %p i ma rozmiar %d\n", &S, sizeof(S));
    printf("Zmienna DOUBLE w pamieci znajduje sie na pozycji: %p i ma rozmiar %d\n", &D, sizeof(D));
    getchar();
    return 0;
}
