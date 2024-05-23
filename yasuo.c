#include <stdio.h>

int ehdiatriste(char arquibancas[20][20], int n, int m) {
    int linha_restrita[20] = {0};
    int coluna_restrita[20] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arquibancas[i][j] == 'c') {
                linha_restrita[i] = 1;
                coluna_restrita[j] = 1;
            }
        }
    }

    int lugar_disponivel = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arquibancas[i][j] == 'v' && !linha_restrita[i] && !coluna_restrita[j]) {
                lugar_disponivel = 1;
                break;
            }
        }
        if (lugar_disponivel) break;
    }

    if(lugar_disponivel){
	    return 1;
    }
    else {
	    return 0;
    }
}

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    char arquibancada[20][20];
    char resultado[20][20];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %c", &arquibancada[i][j]);
            resultado[i][j] = 'o';
        }
    }

    int linha_restrita[20] = {0};
    int coluna_restrita[20] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arquibancada[i][j] == 'c') {
                linha_restrita[i] = 1;
                coluna_restrita[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arquibancada[i][j] != 'v' || linha_restrita[i] || coluna_restrita[j]) {
                resultado[i][j] = 'x';
            }
        }
    }

    int lugar_possivel = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (resultado[i][j] == 'o') {
                lugar_possivel = 1;
                break;
            }
        }
        if (lugar_possivel) break;
    }

    if (lugar_possivel) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                printf("%c ", resultado[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Eh um dia triste para os mono Yasuo\n");
    }

    return 0;
}

