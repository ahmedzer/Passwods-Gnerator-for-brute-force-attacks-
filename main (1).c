#include <stdio.h>
#include <ntdef.h>
#include <rpc.h>


void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

int random(int min, int max){//entier aleatoire entre min et max
    int number = min + rand() % (max - min);
    return number;
}

int sp_char[33]={32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,58,59,60,61,62,63,64,91,92,93,94,95,96,123,124,125,126};

char random_nb[13][50]={"0","01","012","0123","01234","012345","0123456","01234567","012345678","0123456789","0000","$","69"};


int main() {
    Color(1,0);
    printf("\n000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    printf("\n0                                                                                        0");
    printf("\n0        00000000 0000000 0000000 0000000  000000000  0000000 0     0                    0");
    printf("\n0        0      0 0     0 0       0        0          0       0 0   0                    0");
    printf("\n0        00000000 0000000 0000000 0000000  0   00000  0000000 0   0 0                    0");
    printf("\n0        0        0     0       0       0  0       0  0       0     0                    0");
    printf("\n0        0        0     0 0000000 0000000  000000000  0000000 0     0                    0");
    printf("\n0                                                                                        0");

    printf("\n0                    ");Color(4,0);printf("BY : Zerrouk Ahmed");Color(1,0);printf("                                                  0");
    printf("\n000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    int exit=0;
    Color(4,0);
    printf("\nPlease enter the keywords of your vicitm : ");
    const char keywrd[200];

    int choix;
    char keyy[300][100];
    FILE *pass=fopen("PassGen.txt","w+");
    int i=0;
    int cpt=0;
    char add[4];
    char add_nb[4];
    printf("\nDo you want to add special charachter at the end ? (Enter yes or no)");
    scanf("\n%s",add);
    printf("\nDo you want to add random numbers  at the end ? (Enter yes or no)");
    scanf("\n%s",add_nb);
    Color(1,0);
    int nb;
    printf("\nEntet the number of keywords : (<300)  :");
    scanf("\n%d",&nb);
    exit=0;

    while(exit<nb){
             Color(4,0);
            printf("\n===>");
            scanf("\n%[^\n]*c",keyy[i]);
            i++;
            exit++;
    }
    for(int j=0;j<i;j++){
        for(int k=0;k<j;k++){
            char x[300]="";
            cpt++;
           fputs(keyy[j],pass);
           fputs(keyy[k],pass);
           fputc('\n',pass);
            fputs(keyy[k],pass);
            fputs(keyy[j],pass);
            fputc('\n',pass);

        }
        for(int k=j+1;k<i;k++){
            cpt++;
            fputs(keyy[j],pass);
            fputs(keyy[k],pass);
            fputc('\n',pass);
            fputs(keyy[k],pass);
            fputs(keyy[j],pass);
            fputc('\n',pass);
        }
        for(int k=0;k<j;k++){
            char x[300]="";

            fputs(keyy[j],pass);
            fputc(' ',pass);
            cpt++;
            fputs(keyy[k],pass);
            fputc('\n',pass);
            fputs(keyy[k],pass);
            fputc(' ',pass);
            fputs(keyy[j],pass);
            fputc('\n',pass);

        }
        for(int k=j+1;k<i;k++){
            cpt++;
            fputs(keyy[j],pass);
            fputc(' ',pass);
            fputs(keyy[k],pass);
            fputc('\n',pass);
            fputs(keyy[k],pass);
            fputc(' ',pass);
            fputs(keyy[j],pass);
            fputc('\n',pass);
        }

        if(strcmp(add,"yes")==0) {
            for (int k = 0; k < j; k++) {

                for(int t=0;t<32;t++){
                    cpt++;
                    fputs(keyy[j],pass);
                    fputs(keyy[k],pass);
                    fputc(sp_char[t],pass);
                    fputc('\n',pass);
                }
                for(int t=0;t<32;t++){
                    cpt++;
                    fputs(keyy[k],pass);
                    fputs(keyy[j],pass);
                    fputc(sp_char[t],pass);
                    fputc('\n',pass);
                }


            }
            for (int k = j + 1; k < i; k++) {

                for(int t=0;t<32;t++){
                    cpt++;
                    fputs(keyy[j],pass);
                    fputs(keyy[k],pass);
                    fputc(sp_char[t],pass);
                    fputc('\n',pass);
                }
                for(int t=0;t<32;t++){
                    cpt++;
                    fputs(keyy[k],pass);
                    fputs(keyy[j],pass);
                    fputc(sp_char[t],pass);
                    fputc('\n',pass);
                }
            }
            for (int k = 0; k < j; k++) {
                char x[300] = "";
                cpt++;
                fputs(keyy[j], pass);
                fputs(keyy[k], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc('\n', pass);
                fputs(keyy[k], pass);
                fputs(keyy[j], pass);
                fputc('\n', pass);

            }
            for (int k = j + 1; k < i; k++) {
                cpt++;
                fputs(keyy[j], pass);
                fputs(keyy[k], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc('\n', pass);
                fputs(keyy[k], pass);
                fputs(keyy[j], pass);
                fputc('\n', pass);
            }
            for (int k = 0; k < j; k++) {
                char x[300] = "";
                cpt++;
                fputs(keyy[j], pass);
                fputs(keyy[k], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc('\n', pass);
                fputs(keyy[k], pass);
                fputs(keyy[j], pass);
                fputc('\n', pass);

            }
            for (int k = j + 1; k < i; k++) {
                cpt++;
                fputs(keyy[j], pass);
                fputs(keyy[k], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc('\n', pass);
                fputs(keyy[k], pass);
                fputs(keyy[j], pass);
                fputc('\n', pass);
            }
            for (int k = 0; k < j; k++) {
                char x[300] = "";
                cpt++;
                fputs(keyy[j], pass);
                fputc(' ',pass);
                fputs(keyy[k], pass);
                fputc(sp_char[random(0, 32)], pass);
                fputc('\n', pass);
                fputs(keyy[k], pass);
                fputs(keyy[j], pass);
                fputc('\n', pass);

            }
            for (int k = j + 1; k < i; k++) {
                cpt++;
                fputs(keyy[j], pass);
                fputc(' ',pass);
                fputs(keyy[k], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc('\n', pass);
                fputs(keyy[k], pass);
                fputs(keyy[j], pass);
                fputc('\n', pass);
            }
            for (int k = 0; k < j; k++) {
                char x[300] = "";
                cpt++;
                fputs(keyy[j], pass);
                fputc(' ',pass);
                fputs(keyy[k], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc('\n', pass);
                fputs(keyy[k], pass);
                fputs(keyy[j], pass);
                fputc('\n', pass);

            }
            for (int k = j + 1; k < i; k++) {
                cpt++;
                fputs(keyy[j], pass);
                fputc(' ',pass);
                fputs(keyy[k], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc('\n', pass);
                fputs(keyy[k], pass);
                fputs(keyy[j], pass);
                fputc('\n', pass);
            }
            for (int k = 0; k < j; k++) {
                char x[300] = "";
                cpt++;
                fputs(keyy[j], pass);
                fputc(' ',pass);
                fputs(keyy[k], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc('\n', pass);
                fputs(keyy[k], pass);
                fputs(keyy[j], pass);
                fputc('\n', pass);

            }
            for (int k = j + 1; k < i; k++) {
                cpt++;
                fputs(keyy[j], pass);
                fputc(' ',pass);
                fputs(keyy[k], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc(sp_char[random(1, 32)], pass);
                fputc('\n', pass);
                fputs(keyy[k], pass);
                fputs(keyy[j], pass);
                fputc('\n', pass);
            }
        }
        if(strcmp(add_nb,"yes")==0){
            for(int k=0;k<j;k++){
                char x[300]="";
                cpt++;
                for(int t=0;t<13;t++){
                    fputs(keyy[j],pass);
                    fputs(keyy[k],pass);
                    fputs(random_nb[t],pass);
                    fputc('\n',pass);
                }
                for(int t=0;t<13;t++){
                    fputs(keyy[k],pass);
                    fputs(keyy[j],pass);
                    fputs(random_nb[t],pass);
                    fputc('\n',pass);
                }

            }
            for(int k=j+1;k<i;k++){
                char x[300]="";

                for(int t=0;t<13;t++){
                    cpt++;
                    fputs(keyy[j],pass);
                    fputs(keyy[k],pass);
                    fputs(random_nb[t],pass);
                    fputc('\n',pass);
                }
                for(int t=0;t<13;t++){
                    cpt++;
                    fputs(keyy[k],pass);
                    fputs(keyy[j],pass);
                    fputs(random_nb[t],pass);
                    fputc('\n',pass);
                }
            }
        }
    }
    Color(4,0);
    int d;
    printf("\nthe  file PassGen.txt is ready , with %d words ",cpt);
    Color(15,0);
    printf("Press any button ....");
    scanf("%d",&d);
    fclose(pass);
    return 0;
}