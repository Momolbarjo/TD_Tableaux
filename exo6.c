#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 15



void removeZeros(int tab1[],int N){

int i, j, temp;
for (i=0, j=N-1; i<=j; i++)
  {
      if (tab1[i]>0) {
tab1[i]=tab1[i];


}

   if(tab1[i]==0 && tab1[j]>0){
temp = tab1[i];
tab1[i] = tab1[j];
tab1[j] = temp;

}
      if (tab1[i]==0 && tab1[j]==0){
            while(tab1[j]==0 && j>i) {
             j=j-1;
            }
   temp = tab1[i];
tab1[i] = tab1[j];
tab1[j] = temp;

   }
 }

}

void  printArray(int tab1[],int size) {
    for (int i2=0;i2<size;i2++){
    printf("tab[%d] = %d\n",i2, tab1[i2]);
    }
}


void main () {

int tab1[SIZE];

srand(time(NULL));
for (int i=0;i<SIZE;i++) {

	tab1[i]=rand()%5;
	//printf("tab1[%d]=%d\n",i,tab1[i]);
	}

removeZeros(tab1,SIZE);
printArray(tab1,SIZE);
}
