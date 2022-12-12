#include <math.h>
#include <stdio.h>
#define SIZE 7



void  printArray(int tab[],int taille) {
    for (int i=0;i<taille;i++){
    printf("tab[%d] = %d\n",i, tab[i]);
    }
}

void fillArray(int tab[], int taille){
int valeur;
    for (int i=0;i<taille;i++){
	 printf("rentrez valeur : \n");
        scanf("%d",&valeur);
        tab[i] = abs(valeur);
    }
}




void main () {

int tab[7];
int valeur;
abs(valeur);
fillArray(tab,SIZE);
printArray(tab, SIZE); 
}

