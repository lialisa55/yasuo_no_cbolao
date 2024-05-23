#include <stdio.h>

int ehdiatriste(char arquibancas[20][20]){
	return 0;
}

int main (void){
	int n, m;
	scanf("%d %d", &n, &m);

	char arquibancada[n][m];

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf(" %c", &arquibancada[i][j]);
		}
	}

	if(ehdiatriste(arquibancada)){
		printf("Eh um dia triste para os mono Yasuo");
	}
	else{
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				printf("%c", arquibancada[i][j]);
			}
		}
	}
	return 0;
}
