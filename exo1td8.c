//1 Un tableau de taille 10 avec des valeurs provenant d'anciens programmes executés par l'ordinateur .

#include <stdio.h>
#define SIZE 10


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
        tab[i] = valeur;
    }
}


void main () {

    int tab[SIZE];
    fillArray(tab,SIZE);
    printArray(tab,SIZE);

}
