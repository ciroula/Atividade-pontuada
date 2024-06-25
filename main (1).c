
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#define STR 200

int main () {
	char disciplina[3][200];
	float media[3], NotasTotal=0, somaNotas=0, somaPeso=0;
	float nota[3][3], peso[3][3];
	int i, j;
	
	for (i=0; i<3; i++){
		printf("Digite a diciplina %iº: ", i+1);
		scanf("%s",&disciplina[i]);
		
		
		for (j=0; j<3; j++){
			printf("Digite a nota %iº: ", j+1);
			scanf("%f",&nota[i][j]);
			
		
			printf("Digite o peso %iº: ", j+1);
			scanf("%f",&peso[j]);
		
		
		}
		
		printf("\n");
		
		somaNotas += nota[i][j] * peso[i][j];
		somaPeso += peso[i][j];
	}
	media[i] = somaNotas / somaPeso;
	


	printf("\nMédias Ponderadas:\n");
	
      printf("%s: %.2f\n", disciplina[i], media[i]);
  

	



return 0;
}