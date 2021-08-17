#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 10000
int main(){
	int numeros_a_ordenar;
    printf("Numero de numeros para ordenar\n");
    scanf("%d",&numeros_a_ordenar);
    int vector_numeros[numeros_a_ordenar];
    int i,j,k=1;
    for(i=0;i<numeros_a_ordenar;i++){
    	j=rand()%MAX;
		vector_numeros[i]=j;
		k++;
	}
	int x,y;
	for(i=0;i<numeros_a_ordenar;i++)
	{
		for(j=i+1;j<numeros_a_ordenar;j++){
			x=vector_numeros[i]-vector_numeros[j];
			if(x>0){
				y=vector_numeros[j];
				vector_numeros[j]=vector_numeros[i];
				vector_numeros[i]=y;
			}
		}
	}
	printf("Numeros ya ordenados");
	for(i=0;i<numeros_a_ordenar;i++)
	{
		printf("\n%d",vector_numeros[i]);
	}
   
}
