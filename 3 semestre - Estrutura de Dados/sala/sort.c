#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>



int main() {
	setlocale(LC_ALL, "Portuguese");
	int i,n, vet[10]={56,26,93,17,77,31,44,55,20,65};
	for (i=0;i<10;i++)
	printf ("%d\t", vet[i]);
	
	printf("\n\nQual � o valor que deseja buscar? ");
	scanf ("%d", &n);
	
	for(i=0;i<10;i++){
		if(vet[i]==n){
			printf("%d ocorre na posi��o %d do vetor. \n", n,i);
			return 0;
		}
	}
}