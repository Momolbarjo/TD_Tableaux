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

float averageArray(int tab[],int size){

float somme=0;
for(int i=0;i<size;i++){

  float valeurTmp=tab[i];
  somme=somme+valeurTmp;

}
float moyenne=somme/size;

printf("La moyenne est de %f\n",moyenne);

return(moyenne);






}

int maxArray(int tab[], int size){
int tmp_max = tab[0];
for(int i=0;i<size;i++){
    if(tmp_max<tab[i]){
        tmp_max = tab[i];
    }
    else {tmp_max = tmp_max;}
}
printf("Le max est de %d\n",tmp_max);
return(tmp_max);
}

int minArray(int tab[],int size){
int tmp_min = tab[0];
for(int i=0;i<size;i++){
 if (tmp_min> tab[i]){
        tmp_min=tab[i];

   }
    else {tmp_min = tmp_min;}
 }

   printf("Le min est de %d",tmp_min);
   return(tmp_min);
}


int searchElmt(int tab[], int size, int elmt){

for(int i=0;i<size;i++){
 if (tab[i]==elmt){
        printf("\nCela correspond a tab[%d]",i);
         return(tab[i]);

}
   /*else {
        printf("\n-1");
        return (-1);}
*/
}
}



void main () {

int tab[25];

 fillArray(tab,SIZE);
 printArray(tab,SIZE);
 averageArray(tab,SIZE);
 maxArray(tab,SIZE);
 minArray(tab,SIZE);
searchElmt(tab,SIZE,15);




}














void main () {

int tab[25];

 fillArray(tab,SIZE);
 printArray(tab,SIZE);














}
