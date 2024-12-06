#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>
#include <direct.h>
#include <sys/stat.h>
#include <sys/types.h>

//cor do jogador 1: 1
//cor do jogador 2: 5

void colorir(int cor){
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(hConsole, cor);
}

void systemClear() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void inicioJogo (){
    colorir(5);
    printf("                                        @@@@@         .       .                                                     \n");
    printf("                           .         @@@@@@@@@@@      .                           ..  .                         . . \n");
    printf("                                   @@@@@     %%@@@      ..         .             .                                  \n");
    printf("                                 @@@@@        .@@@@                                                                  \n");
    printf("                        .       .@@@@           @@@.                                                                 \n");
    printf("                                @@@@                                                         .                      \n");
    printf("                            ..  @@@@.                                  . .                     .     .  .  ..       \n");
    printf("                               @@@@@    .    .              .                                                       \n");
    printf("                                @@@@                                                              .           .     \n");
    printf("                                @@@@                            .                   .            @@  @@             \n");
    printf("                    .        .  .@@@@                               .                           %@@@@@        .     \n");
    printf("                         .       @@@@@                                .                       @@@@@@@@@@       .    \n");
    printf("                                   @@@@@ .       #@@@@@@@@@:                           @@@@@@@@@@@@@@@@@@@   .      \n");
    printf("                                    #@@@@@  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@+..=%@@@@@@@@@@@@@@@@@@@@@@@@@@@@          \n");
    printf("                        .              @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#         \n");
    printf("                                 .       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    .   \n");
    printf("                                         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@        . \n");
    printf("                        .        .     .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   .     .         \n");
    printf("                       .       .     . @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                     \n");
    printf("                                       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   .   \n");
    printf("                                       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     .                  \n");
    printf("                     .         .       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                         \n");
    printf("                                 .   :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             .           .\n");
    printf("                              . .  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      .                    \n");
    printf("                               . @@@@@@@@@@@@@@@@@@@@@@@@@             @@@@@@@@@@@@@@@@@                            \n");
    printf("                       .       @@@@@@@@@@@@@@@ @@@@@@@@@                @@@@@@@@@@@@@@@@      .     .               \n");
    printf("                              @@@@@@@@@@@@@    @@@@@@@@                .%%@@@@@@  @@@@@@@%    .     .               \n");
    printf("                              @@@@@          @@@@@@@@                    @@@@@     @@@@@@                    .      \n");
    printf("                     .        @@@@  ..        @@@@@+                      @@@@      @@@@@         .      .         .\n");
    printf("                            . @@@@.     .. .    @@@@@       .  .          @@@        @@@@@           . . .          \n");
    printf("                               @@@.               @@@@       .      .     @@@@ .      @@@@@                         \n");
    printf("                               @@@@@:     . .      .@@@@@@@                @@@@@@     . @@@@@@       .              \n");
    colorir(3);
    printf("                           @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  .     \n");
    printf("                                                              .                                                     \n");
    printf("                              @@@@@@@@@@@@@@      . @@@@@@@@@@@@@-     @@@@@@@@@@@@@@     @@@@@@@@@@@@@@            \n");
    printf("                              @@@@@@@@@@@@@@@     @@@@@@@@@@@@@@@@@   @@@@@@@@@@@@@@@@    @@@@@@@@@@@@@@@           \n");
    printf("                              @@@@@@    @@@@@  .  @@@@@@@ . @@@@@@@   @@@@@@@.  @@@@@@@   @@@@@@   @@@@@@#          \n");
    printf("                              @@@@@@   @@@@@+     @@@@@@ .   @@@@@@   @@@@@@     @@@@@@   @@@@@@    @@@@@+          \n");
    printf("                              @@@@@@@@@@@@@@@     @@@@@@     @@@@@@   @@@@@@     @@@@@@   @@@@@@   @@@@@@#          \n");
    printf("                              @@@@@@@@@@@@@@@@@   @@@@@@     @@@@@@   @@@@@@   . @@@@@@   @@@@@@@@@@@@@@@           \n");
    printf("                              @@@@@@     @@@@@@  .@@@@@@     @@@@@@  .@@@@@@     @@@@@@   @@@@@@@@@@@@@@            \n");
    printf("                              @@@@@@     @@@@@@   @@@@@@@@@@@@@@@@@   @@@@@@@@@@@@@@@@@   @@@@@@                    \n");
    printf("                              @@@@@@@@@@@@@@@@@   @@@@@@@@@@@@@@@@.   @@@@@@@@@@@@@@@@    @@@@@@    .               \n");
    printf("                              @@@@@@@@@@@@@@@@      @@@@@@@@@@@@@       @@@@@@@@@@@@@     @@@@@@                    \n");
    printf("                                 ..                            .              .                                     \n");
    printf("                           @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@        \n");

    colorir(5);
    printf("                                          Aperte qualquer tecla para iniciar o jogo...                              \n");

    getch();
    systemClear();
}

void vitoria_jogador_01(){
    systemClear();
    colorir(14);
    printf("   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   \n");
    colorir(4);
    printf("\n");
    printf("    @@@     @@@ @@@@@@@@@@@ @@@@@@@@@   @@@@@@@@  @@@@@@@@   @@@@@@@@@@      @@@     @@@     \n");
    printf("    @@@     @@@     @@@        @@@     @@@    @@@ @@@    @@@     @@@       @@@ @@@   @@@     \n");
    printf("    @@@     @@@     @@@        @@@     @@@    @@@ @@@    @@@     @@@      @@@   @@@  @@@     \n");
    printf("    @@@     @@@     @@@        @@@     @@@    @@@ @@@@@@@@       @@@     @@@@@@@@@@@ @@@     \n");
    printf("     @@@   @@@      @@@        @@@     @@@    @@@ @@@    @@@     @@@     @@@     @@@ @@@     \n");
    printf("      @@@@@@@       @@@        @@@     @@@    @@@ @@@    @@@     @@@     @@@     @@@         \n");
    printf("        @@@     @@@@@@@@@@@    @@@      @@@@@@@   @@@    @@@ @@@@@@@@@@  @@@     @@@ @@@     \n");
    printf("\n");
    colorir(14);
    printf("   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   \n");
    printf("\n");
    colorir(1);
    printf("    @@@@@@@@@@  @@@@@@@@   @@@@@@@       @@@     @@@@@@@     @@@@@@@   @@@@@@@@         @@@  \n");
    printf("        @@@    @@@    @@@ @@@    @@@   @@@ @@@   @@@    @@@ @@@    @@@ @@@    @@@      @@@@  \n");
    printf("        @@@    @@@    @@@ @@@         @@@   @@@  @@@    @@@ @@@    @@@ @@@    @@@       @@@  \n");
    printf("        @@@    @@@    @@@ @@@        @@@@@@@@@@@ @@@    @@@ @@@    @@@ @@@@@@@@         @@@  \n");
    printf("        @@@    @@@    @@@ @@@   @@@@ @@@     @@@ @@@    @@@ @@@    @@@ @@@    @@@       @@@  \n");
    printf("    @@@ @@@    @@@    @@@ @@@    @@@ @@@     @@@ @@@    @@@ @@@    @@@ @@@    @@@       @@@  \n");
    printf("      @@@       @@@@@@@@   @@@@@@@   @@@     @@@ @@@@@@@@    @@@@@@@   @@@    @@@     @@@@@@@\n");
    getchar();
    systemClear();
}

void vitoria_jogador_02(){
    systemClear();
    colorir(14);
    printf("   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   \n");
    colorir(4);
    printf("\n");
    printf("    @@@     @@@ @@@@@@@@@@@ @@@@@@@@@   @@@@@@@@  @@@@@@@@   @@@@@@@@@@      @@@     @@@     \n");
    printf("    @@@     @@@     @@@        @@@     @@@    @@@ @@@    @@@     @@@       @@@ @@@   @@@     \n");
    printf("    @@@     @@@     @@@        @@@     @@@    @@@ @@@    @@@     @@@      @@@   @@@  @@@     \n");
    printf("    @@@     @@@     @@@        @@@     @@@    @@@ @@@@@@@@       @@@     @@@@@@@@@@@ @@@     \n");
    printf("     @@@   @@@      @@@        @@@     @@@    @@@ @@@    @@@     @@@     @@@     @@@ @@@     \n");
    printf("      @@@@@@@       @@@        @@@     @@@    @@@ @@@    @@@     @@@     @@@     @@@         \n");
    printf("        @@@     @@@@@@@@@@@    @@@      @@@@@@@   @@@    @@@ @@@@@@@@@@  @@@     @@@ @@@     \n");
    printf("\n");
    colorir(14);
    printf("   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   \n");
    printf("\n");
    colorir(5);
    printf("    @@@@@@@@@@  @@@@@@@@   @@@@@@@       @@@     @@@@@@@     @@@@@@@   @@@@@@@@         @@@@@@@@   \n");
    printf("        @@@    @@@    @@@ @@@    @@@   @@@ @@@   @@@    @@@ @@@    @@@ @@@    @@@      @@@    @@@  \n");
    printf("        @@@    @@@    @@@ @@@         @@@   @@@  @@@    @@@ @@@    @@@ @@@    @@@            @@@   \n");
    printf("        @@@    @@@    @@@ @@@        @@@@@@@@@@@ @@@    @@@ @@@    @@@ @@@@@@@@            @@@     \n");
    printf("        @@@    @@@    @@@ @@@   @@@@ @@@     @@@ @@@    @@@ @@@    @@@ @@@    @@@        @@@       \n");
    printf("    @@@ @@@    @@@    @@@ @@@    @@@ @@@     @@@ @@@    @@@ @@@    @@@ @@@    @@@      @@@         \n");
    printf("      @@@       @@@@@@@@   @@@@@@@   @@@     @@@ @@@@@@@@    @@@@@@@   @@@    @@@      @@@@@@@@@@  \n");
    getchar();
    systemClear();
}

void tela_creditos(){
systemClear();
colorir(8);
printf("                Developed by                    \n");
printf("            Rafael da Silva Souza               \n");
printf("            Kayky Moreira Morais                \n");
printf("            Pedro Yan Alcantara Palacio         \n");
printf("\n");
printf("\n");
printf("\n");
printf("         UFCA Ciencia da Computacao 2024.1      \n");
getchar();
systemClear();
}

void desenho(int **jogo){
        for(int j=0;j<6;j++){
            printf("\t\t");

            for(int i=0;i<=6;i++){
                if(i<6){
                    colorir(14);
                    printf("+---");
                }else{
                    printf("+");
                    colorir(7);
                }
            }
        printf("\n\t\t");
        for(int i=0;i<=6;i++){
            if(i<6){
                if(jogo[j][i] < 0){
                    printf("| ");
                    colorir(5);
                    printf("%c ", jogo[j][i]*(-1));
                    colorir(14);
                }else if(jogo[j][i] == 0){
                        colorir(14);
                        printf("|   ", jogo[j][i]);
                     }else{
                         printf("| ");
                         colorir(1);
                         printf("%c ", jogo[j][i]);
                         colorir(7);
                     }
            }else{
                colorir(14);
                printf("| ");
                colorir(12);
                printf("%d", j+1);
                colorir(7);
            }
        }
        printf("\n");
        if(j==6-1){
            printf("\t\t");
            for(int i=0;i<=6;i++){
                if(i<6){
                    colorir(14);
                    printf("+---");
                }else{
                    printf("+\n");
                    colorir(12);
                    printf("\t\t");

                    for(int i=0;i<6;i++){
                        colorir(12);
                        printf("  %c ", (char)i+97);
                        colorir(7);
                    }
                }
            }
        }
    }
    }

void vitoria(int **jogo, int *qnt, int *g) {
    int player, casos=0;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                if (jogo[i][j] != 0) {
                    if(qnt[0] + qnt[2]==0){
                        *g = 1;
                    }
                    if((qnt[1] + qnt[3])==0){
                        *g = 2;
                    }
                    player = (jogo[i][j] > 0) ? 1 : -1;
                    if (j + 1 <= 6 - 1) {
                        casos = (jogo[i][j]*player == 109) ? casos+1 : casos;
                        if(jogo[i][j+1]*player > 0 && i<= 6-1 && (j+2)<=6-1){
                            casos = (jogo[i][j+1]*player == 109) ? casos+1 : casos;
                            if(jogo[i][j+2]*player > 0){
                                casos = (jogo[i][j+2]*player == 109) ? casos+1 : casos;
                                switch(casos){
                                    case 0:
                                        *g = (3 - player)/2;
                                        break;
                                    case 1:
                                        jogo[i][j] = 0;
                                        jogo[i][j+1] = 0;
                                        jogo[i][j+2] = 0;
                                        qnt[(5 - player)/ 2]+= 3;
                                        break;
                                    case 2:
                                        jogo[i][j] = 0;
                                        jogo[i][j+1] = 0;
                                        jogo[i][j+2] = 0;
                                        qnt[(5 - player)/ 2]+= 3;
                                        break;
                                    case 3:
                                        jogo[i][j] = 0;
                                        jogo[i][j+1] = 0;
                                        jogo[i][j+2] = 0;
                                        qnt[(5 - player)/ 2]+= 3;
                                        break;
                                }
                            }
                        }
                    }
                    casos=0;
                    for (int k = (j + 1); k >= (j - 1); k--) {
                        if ( i + 1 <= 6 - 1 && k >= 0 && k <= 6 - 1) {
                            casos = (jogo[i][j]*player == 109) ? casos+1 : casos;
                            if(jogo[i+1][k]*player > 0 && (2*k - j)>=0 && (i+2)<= 6-1 && (2*k - j) <= 6-1){
                                casos = (jogo[i+1][k]*player == 109) ? casos+1 : casos;
                                if(jogo[i+2][2*k - j]*player > 0){
                                    casos = (jogo[i+2][2*k - j]*player == 109) ? casos+1 : casos;
                                    switch(casos){
                                    case 0:
                                        *g = (3 - player)/2;
                                        break;
                                    case 1:
                                        jogo[i][j] = 0;
                                        jogo[i+1][k] = 0;
                                        jogo[i+2][2*k - j] = 0;
                                        qnt[(5 - player)/ 2]+= 3;
                                        break;
                                    case 2:
                                        jogo[i][j] = 0;
                                        jogo[i+1][k] = 0;
                                        jogo[i+2][2*k - j] = 0;
                                        qnt[(5 - player)/ 2]+= 3;
                                        break;
                                    case 3:
                                        jogo[i][j] = 0;
                                        jogo[i+1][k] = 0;
                                        jogo[i+2][2*k - j] = 0;
                                        qnt[(5 - player)/ 2]+= 3;
                                        break;
                                    }
                                }
                            }
                        }
                        casos=0;
                    }
                }

            }
        }
    }
void push(int x, int y, int **jogo, int *qnt) { // qnt = {(m p1), (m p2), (M p1), (M p2)}
    for (int i = x - 1; i <= x + 1; i++) {
        for (int j = y - 1; j <= y + 1; j++) {
            if (i != x || j != y) {
                if (abs(jogo[x][y]) == 77) { //Gato grande
                    if (i >= 0 && i <= 5 && j >= 0 && j <= 5 && jogo[i][j] != 0) {
                        int tX = x - 2 * (x - i);
                        int tY = y - 2 * (y - j);
                        if (tX >= 0 && tX <= 5 && tY >= 0 && tY <= 5) {
                            if (jogo[tX][tY] == 0) {
                                jogo[tX][tY] = jogo[i][j];
                                jogo[i][j] = 0;
                            }
                        } else {
                            switch(jogo[i][j]) {
                                case 109:
                                    qnt[0]++;
                                    break;
                                case -109:
                                    qnt[1]++;
                                    break;
                                case 77:
                                    qnt[2]++;
                                    break;
                                case -77:
                                    qnt[3]++;
                                    break;
                            }
                            jogo[i][j] = 0;
                        }
                    }
                }
                if (abs(jogo[x][y]) == 109) { //Gato pequeno
                    if (i >= 0 && i <= 5 && j >= 0 && j <= 5 && abs(jogo[i][j]) == 109) {
                        int tX = x - 2 * (x - i);
                        int tY = y - 2 * (y - j);
                        if (tX >= 0 && tX <= 5 && tY >= 0 && tY <= 5) {
                            if (jogo[tX][tY] == 0) {
                                jogo[tX][tY] = jogo[i][j];
                                jogo[i][j] = 0;
                            }
                        } else {
                            switch(jogo[i][j]) {
                                case 109:
                                    qnt[0]++;
                                    break;
                                case -109:
                                    qnt[1]++;
                                    break;
                                case 77:
                                    qnt[2]++;
                                    break;
                                case -77:
                                    qnt[3]++;
                                    break;
                            }
                            jogo[i][j] = 0;
                        }
                    }
                }
            }
        }
    }
}

void createSavesFolder(const char *folderName) {
    struct stat st = {0};
    if (stat(folderName, &st) == -1){
        #ifdef _WIN32
            _mkdir(folderName);
        #else
            mkdir(folderName, 0700);
        #endif
    }
}
void updateSave(int **jogo, int jogador, int *qnt) {
    char n;
    FILE *save;
    save = fopen("saves/save1.txt", "w");
    fprintf(save, "%c\n", (jogador==1) ? '1' : '2');
    for(int i=0;i<4;i++){
    n = qnt[i]+'0';
    fprintf(save, "%c", n);
    }
    fprintf(save, "\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            char valueToWrite;
            switch (jogo[i][j]) {
                case 109:
                    valueToWrite = '1';
                    break;
                case -109:
                    valueToWrite = '2';
                    break;
                case 77:
                    valueToWrite = '3';
                    break;
                case -77:
                    valueToWrite = '4';
                    break;
                default:
                    valueToWrite = '0';
            }

            if (j == 5) {
                fprintf(save, "%c\n", valueToWrite);
            } else {
                fprintf(save, "%c", valueToWrite);
            }
        }
    }
    fclose(save);
}
void printSave() {
    int **mat, r = 0, vez;
    char buffer[256];
    mat = (int **)malloc(6 * sizeof(int *));
    for (int i = 0; i < 6; i++) {
        mat[i] = (int *)malloc(6 * sizeof(int));
    }
    FILE *save;
    save = fopen("saves/save1.txt", "r");
    fgets(buffer, sizeof(buffer), save);
    vez = buffer[0] - '0';
    fgets(buffer,sizeof(buffer), save);
    while (fgets(buffer, sizeof(buffer), save) != NULL) {
            for (int i = 0; i < 6; i++) {
                mat[r][i] = buffer[i] - '0';
            }
        r++;
    }
    fclose(save);
    for(int i = 0; i<6;i++){
        for(int j = 0;j<6;j++){
            switch(mat[i][j]){
                    case 1:
                    mat[i][j] = 109;
                    break;
                    case 2:
                    mat[i][j] = -109;
                    break;
                    case 3:
                    mat[i][j] = 77;
                    break;
                    case 4:
                    mat[i][j] = -77;
                    break;
                    default:
                    mat[i][j] = 0;
                }
        }
    }
    desenho(mat);
    colorir(14);
    printf("\n\n\t\t     Vez do ");
    (vez == 1) ? colorir(1) : colorir(5);
    printf("player %i\n", vez);
}
int **saveGame() {
    int **mat, r = 0;
    char buffer[256];
    mat = (int **)malloc(6 * sizeof(int *));
    for (int i = 0; i < 6; i++) {
        mat[i] = (int *)malloc(6 * sizeof(int));
    }
    FILE *save;
    save = fopen("saves/save1.txt", "r");
    fgets(buffer, sizeof(buffer), save);
    fgets(buffer, sizeof(buffer), save);
    while (fgets(buffer, sizeof(buffer), save) != NULL) {
            for (int i = 0; i < 6; i++) {
                mat[r][i] = buffer[i] - '0';
            }
        r++;
    }
    fclose(save);
    for(int i = 0; i<6;i++){
        for(int j = 0;j<6;j++){
            switch(mat[i][j]){
                    case 1:
                    mat[i][j] = 109;
                    break;
                    case 2:
                    mat[i][j] = -109;
                    break;
                    case 3:
                    mat[i][j] = 77;
                    break;
                    case 4:
                    mat[i][j] = -77;
                    break;
                    default:
                    mat[i][j] = 0;
                }
        }
    }
    return mat;
}
int savePlayer() {
    int vez;
    char buffer[256];
    FILE *save;
    save = fopen("saves/save1.txt", "r");
    if(fgets(buffer, sizeof(buffer), save) != NULL) {
        vez = (int)buffer[0] - 48;
    }
    fclose(save);
    return vez;
}
int *saveQnt(){
    char buffer[256];
    int *quantidades = (int*) malloc(4 * sizeof(int));
    FILE *save;
    save = fopen("saves/save1.txt", "r");
    fgets(buffer, sizeof(buffer), save);
    fgets(buffer, sizeof(buffer), save);
    for(int i=0;i<4;i++)
        quantidades[i] = buffer[i] - '0';
    fclose(save);
    return quantidades;
}

int verifySave(){
    FILE *save;
    char buffer[6];
    int retorno;
    save = fopen("saves/save1.txt", "r");
    retorno = (fgets(buffer, sizeof(buffer), save) == NULL) ? 0 : 1;
    fclose(save);
    return retorno;
}

void estado(int *qnt){
    colorir(1);
    printf("\t\t    m   M   ");
    colorir(5);
    printf("    m   M\n");
    colorir(14);
    printf("\t\t  +---+---+   +---+---+\n");
    printf("\t\t  | %d | %d |   | %d | %d |\n", qnt[0], qnt[2], qnt[1], qnt[3]);
    printf("\t\t  +---+---+   +---+---+\n\n");
}



int main(){
    setlocale(LC_ALL, "Portuguese");
    const char *folder = "saves";
    int **jogo;
    int *qnt;
    int jogador = 1, ganhou=0;
    int x, y;
    char gato;
    char position[3];

    jogo = malloc(6*sizeof(int *));
    for(int v = 0;v<6;v++){
        jogo[v] = malloc(6*sizeof(int));
    }

    for(int v = 0;v<6;v++){
        for(int w=0;w<6;w++){
            jogo[v][w]=0;
        }
    }
    qnt = malloc(4*sizeof(int));
    for(int v = 0;v<4;v++)
        qnt[v] = (v<2) ? 8 : 0;
    inicioJogo();
    createSavesFolder(folder);
    if(verifySave()){
        char ans;
        printf("\t\t    Há um jogo salvo:\n\n");
        printSave();
        colorir(14);
        printf("\n\n\t   Você deseja continuar? (digite s ou n) ");
        ans = getch();
        fflush(stdin);
        if(ans == 's'){
        int **mat;
        mat = saveGame();
        jogador = savePlayer();
            for(int i=0;i<6;i++){
                for(int j=0;j<6;j++){
                    jogo[i][j] = mat[i][j];
                }
            }
        qnt = saveQnt();
        }
        systemClear();
    }
    do{
    colorir(3);
    printf("\t\t\t  BOOP\n\n");
    colorir(7);
    estado(qnt);
    desenho(jogo);
    if (jogador == 1 && qnt[jogador + 1] != 0 || jogador == 2 && qnt[jogador + 1] != 0) {
        jogador == 1 ? colorir(1) : colorir(5);
        printf("\n\n\t  Player %i", jogador);
        colorir(14);
        printf(", qual gato você quer colocar? ");
        scanf("%c", &gato);
        fflush(stdin);
        while((gato != 'm' && gato != 'M') || ((qnt[jogador-1]== 0 && gato=='m') || (qnt[jogador+1]==0 && gato == 'M' ))){
            if(gato != 'm' && gato != 'M'){
                printf("    Esse tipo de gato não existe, escolha m ou M ");
            }
            if((qnt[jogador-1]== 0 && gato=='m') || (qnt[jogador+1]==0 && gato == 'M' )){
                printf("    Você não tem mais gatos nesse estoque, escolha outro ");
            }
            scanf("%c", &gato);
            fflush(stdin);
        }
    } else {
        gato = 'm';
        printf("\n\n");
    }
    jogador == 1 ? colorir(1) : colorir(5);
    printf("    Player %i", jogador);
    colorir(14);
    printf(", em quais coordenadas você deseja jogar? (x,y) ");
    gets(position);
    y = position[0] - 'a';
    x = position[1] - '0' - 1;
    fflush(stdin);
    while(x<0 || x>5 || y<0 || y>5 || jogo[x][y] != 0){
        printf("    Coordenada inválida, insira outra... ");
        gets(position);
        y = position[0] - 'a';
        x = position[1] - '0' - 1;
    }
    jogo[x][y] = (int)gato*(3 - 2*jogador);
    switch(gato){
    case 'm':
        qnt[jogador-1]--;
        break;
    case 'M':
        qnt[jogador+1]--;
        break;
    }
    push(x,y,jogo,qnt);
    printf("    Aperte qualquer tecla para confirmar...");
    getch();

    vitoria(jogo,qnt, &ganhou);
    jogador = (jogador == 1) ? jogador+1 : jogador-1;
    updateSave(jogo, jogador, qnt);
    systemClear();
    }while(ganhou==0);
    remove("saves/save1.txt");
    (ganhou == 1) ? vitoria_jogador_01() : vitoria_jogador_02();
    tela_creditos();
    return 0;
}
