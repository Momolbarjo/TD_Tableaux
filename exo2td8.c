#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 25




void  printArray(int tab[],int taille) {
    for (int i=0;i<taille;i++){
    printf("tab[%d] = %d\n",i, tab[i]);
    }
}

void fillArray(int tab[], int taille){
int valeur;
srand(time(NULL));
    for (int i=0;i<taille;i++){
        valeur=rand()%21;
        tab[i] = valeur;
    }
}

























void main () {

int tab[25];

 fillArray(tab,SIZE);
 printArray(tab,SIZE);














}
