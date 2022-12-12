#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 20

int evenArray(int tab[],int taille){
int count=0;
for (int i=0;i<taille;i++) {
    if(tab[i]%2==0){
        count++;
    }}
        printf("\n Le nombre d'element pair est de %d",count);
        return(count);



}

void main () {
int tab[SIZE];
int valeur;
srand(time(NULL));


for(int i=0;i<SIZE;i++){
    tab[i]=(rand()%6)+5;
    printf("\n tab[%d]=%d",i,tab[i]);
}
//printf("\n %d",tab[0]);
evenArray(tab,SIZE);

int tab_even [SIZE];
for (int i=0;i<SIZE;i++) {
    if(tab[i]%2==0){
        tab_even[i]=tab[i];
        printf("\n tab_even[%d]=%d",i,tab[i]);
    }
}
}
/*int tab_odd [SIZE];
for (int i=0;i<SIZE;i++) {
    if(tab[i]%2)>=0){
        tab_odd[i]=tab[i];
        printf("\n tab_odd[%d]=%d",i,tab[i]);
    }
}

}
*/







