#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>
#include <string.h>
#define perguntas 5


struct rgInfos {
char nome[35];
char morada[50];
int telemovel;
};
struct rgInfos Infos;

int main()
{

FILE*medias;
medias=fopen("medias.txt","w");

int h,j,k;
int i,programa;
int tipo,friatipo,thermotipo,tempo;
int cor,abrirfria,correrfria,abrirthermo,abrirthermo2,correrthermo;
float horas,media,soma=0.0;
float avaliar[perguntas];
int menu_conta,repetirmenu,repetirinfo;
tempo=0;

setlocale(LC_ALL,"Portuguese");

printf("Iniciando");
for(h=0;h<=3;h++)
{
    for(j=0;j<sleep(1);j++)
        k=j;
    printf(".");
}
clrscr();
textcolor(RED);
printf(R"EOF(
------------------------------------------------------------
  ______ _______   __  _______ _____ __  __ ______ _____    |
 |  ____|_   _\ \ / / |__   __|_   _|  \/  |  ____|  __ \   |
 | |__    | |  \ V /     | |    | | | \  / | |__  | |__) |  |
 |  __|   | |   > <      | |    | | | |\/| |  __| |  _  /   |
 | |     _| |_ / . \     | |   _| |_| |  | | |____| | \ \   |
 |_|    |_____/_/ \_\    |_|  |_____|_|  |_|______|_|  \_\  |
 ------------------------------------------------------------

)EOF");

textcolor(YELLOW);
do{

printf("O que pretende fazer?\n");
printf("1- Iniciar\n");
printf("2- Sair\n");
printf("\nSua opção:\t");
scanf("%d",&menu_conta);
fgetc(stdin);
clrscr();

switch(menu_conta)
{

case 1:
do{

textcolor(YELLOW);
printf("\nPorfavor digite o seu nome:\t");
gets(Infos.nome);
printf("\nPorfavor digite a sua morada:\t");
gets(Infos.morada);
printf("\nPorfavor digite o seu número de telemóvel:\t");
scanf("%i",&Infos.telemovel);
clrscr();
printf("Carregando");
for(h=0;h<=3;h++)
{
    for(j=0;j<sleep(1);j++)
        k=j;
    printf(".");

}
system("cls");
printf("\nO seu nome é: %s\n A sua morada é: %s\n E o seu número de telemóvel é: %i\n Está correto?\n",Infos.nome,Infos.morada,Infos.telemovel);
printf("1- Sim\n");
printf("2- Não\n");
printf("\nSua opção:\t");
scanf("%i",&repetirinfo);
fflush(stdin);
clrscr();
}
while(repetirinfo==2);

printf("\nPorfavor selecione a cor do vidro\n");
printf("1- Branco ou cinza\n");
printf("2- Castanho, verde ou bronze\n");
printf("3- Bicolor\n");
printf("\nSua opção:\t");
scanf("%i",&cor);
clrscr();

switch(cor)
{
    case 1: tempo=tempo+1440;
    ;break;
    case 2: tempo=tempo+10080;
    ;break;
    case 3: tempo=tempo+20160;
    ;break;
    default: textcolor(RED);
        printf("\n!Opção inválida o usuário apenas poderia escolher uma das três cores!\n");
        textcolor(WHITE);
        return;
}

printf("\nPorfavor selecione o tipo de janela:\n");
printf("1- Série Fria S / Corte térmico\n");
printf("2- Série Thermoline com corte térmico\n");
textcolor(RED);
printf("! A série com corte térmico demora mais tempo na produção porque tem mais parafusos !\n");
textcolor(YELLOW);
printf("\nSua opção:\t");
scanf("%i",&tipo);
printf("----------------------------------------------------------------------------------------\n");

switch(tipo)
{
    case 1: printf("A janela é de:\n");
    printf("1- Correr (Confort)\n");
    printf("2- Abrir (Btf)\n");
    printf("\nSua opção:\t");
    scanf("%i",&friatipo);
    printf("----------------------------------------------------------------------------------------\n");

    switch(friatipo)
    {
        case 1: printf("Selecione o número de folhas:\n");
                printf("1- Correr c/ 2 folhas\n");
                printf("2- Correr c/ 3 folhas\n");
                printf("3- Correr c/ 4 folhas\n");
                printf("\nSua opção:\t");
                scanf("%i",&correrfria);
                printf("----------------------------------------------------------------------------------------\n");

                switch(correrfria)
                {
                    case 1: tempo=tempo+40;
                    ;break;
                    case 2: tempo=tempo+60;
                    ;break;
                    case 3: tempo=tempo+70;
                    ;break;
                    default: textcolor(RED);
                        printf("Opção inválida o usuário apenas poderia escolher uma das três opções\n");
                        textcolor(WHITE);
                        return;
                }
                ;break;
         case 2: printf("1- Abrir c/ 2 folhas\n");
                 printf("2- Abrir c/ fixo + 2 folhas c/ oscilo batente\n");
                 printf("3- Abrir c/ 4 folhas\n");
                 printf("\nSua opção:\t");
                 scanf("%i",&abrirfria);
                 printf("----------------------------------------------------------------------------------------\n");

                 switch(abrirfria)
                {
                    case 1: tempo=tempo+40;
                    ;break;
                    case 2: tempo=tempo+60;
                    ;break;
                    case 3: tempo=tempo+70;
                    ;break;
                    default:textcolor(RED);
                        printf("Opção inválida o usuário apenas poderia escolher uma das três opções\n");
                        textcolor(WHITE);
                        return;
                }
                ;break;
                default:textcolor(RED);
                    printf("Opção inválida o usuário não escolher uma das duas opções\n");
                    textcolor(WHITE);
                    return;
    }
        ;break;

        case 2: printf("A janela é:\n");
                printf("1- Thermostop 24\n");
                printf("2- Thermostop 70\n");
                printf("3- Correr (Thermoline)\n");
                printf("\nSua opção:\t");
                scanf("%i",&thermotipo);
                printf("----------------------------------------------------------------------------------------\n");

                switch(thermotipo)
                {
                    case 1: printf("1- Abrir c/ 2 folhas\n");
                            printf("2- Abrir c/ fixo + 2 folhas c/ oscilo batente\n");
                            printf("3- Abrir c/ 4 folhas\n");
                            printf("\nSua opção:\t");
                            scanf("%i",&abrirthermo);
                            printf("----------------------------------------------------------------------------------------\n");

                            switch(abrirthermo)
                            {
                                case 1: tempo=tempo+50;
                                ;break;
                                case 2: tempo=tempo+70;
                                ;break;
                                case 3: tempo=tempo+80;
                                ;break;
                                default: textcolor(RED);
                                    printf("Opção inválida o usuário apenas poderia escolher uma das três opções\n");
                                    textcolor(WHITE);
                                    return;
                            }
                    ;break;

                    case 2: printf("1- Abrir c/ 2 folhas\n");
                            printf("2- Abrir c/ fixo + 2 folhas c/ oscilo batente\n");
                            printf("3- Abrir c/ 4 folhas\n");
                            printf("\nSua opção:\t");
                            scanf("%i",&abrirthermo2);
                            printf("----------------------------------------------------------------------------------------\n");

                            switch(abrirthermo2)
                            {
                              case 1: tempo=tempo+70;
                              ;break;
                              case 2: tempo=tempo+90;
                              ;break;
                              case 3: tempo=tempo+110;
                              ;break;
                              default: textcolor(RED);
                                 printf("Opção inválida o usuário apenas poderia escolher uma das três opções\n");
                                 textcolor(WHITE);
                                 return;
                            }
                    ;break;

                    case 3: printf("1- Correr c/ 2 folhas\n");
                            printf("2- Correr c/ 3 folhas\n");
                            printf("3- Correr c/ 4 folhas\n");
                            printf("\nSua opção:\t");
                            scanf("%i",&correrthermo);
                            printf("----------------------------------------------------------------------------------------\n");

                            switch(correrthermo)
                            {
                              case 1: tempo=tempo+50;
                              ;break;
                              case 2: tempo=tempo+70;
                              ;break;
                              case 3: tempo=tempo+80;
                              ;break;
                              default: textcolor(RED);
                                  printf("Opção inválida o usuário apenas poderia escolher uma das três opções\n");
                                  textcolor(WHITE);
                                  return;
                            }
                    ;break;

                    default: textcolor(RED);
                         printf("Opção inválida o usuário não escolheu nenhuma das opções\n");
                         textcolor(WHITE);
                         return;
                }
                   ;break;
                   default: textcolor(RED);
                       printf("Opção inválida o usuário não selecionou nenhum dos dois tipos de janela\n");
                       textcolor(WHITE);
                       return;

}

printf("Calculando");
for(h=0;h<=3;h++)
{
    for(j=0;j<sleep(1);j++)
        k=j;
    printf(".");
}
system("cls");
textcolor(GREEN);
printf("\nO tempo total de obra vai ser de:\n");
printf("%i minutos\n",tempo);
horas=tempo/60;
printf("%.2f horas\n\n",horas);
tempo=tempo+10080;
horas=tempo/60;
printf("Com o tempo de entrega a janela chegará em:\n");
printf("%i minutos\n",tempo);
printf("%.2f horas\n\n",horas);
textcolor(RED);
printf("!Poderá acontecer algum atraso no fornecimento material principalmente dos vidros devido a uma crise energética, erro de medição ou alguma quebra de vidro então o tempo total será!\n");
printf("%i minutos\n",tempo+10080);
printf("%.2f horas\n",horas+168);
textcolor(YELLOW);
printf("----------------------------------------------------------------------------------------\n");
textcolor(WHITE);

printf("%s\n",Infos.nome);
fprintf(medias,"%s\n",Infos.nome);


printf("%s\n",Infos.morada);
fprintf(medias,"%s\n",Infos.morada);

printf("%i\n",Infos.telemovel);
fprintf(medias,"%i\n",Infos.telemovel);

printf("Quer avaliar o programa?\n");
printf("1- Sim\n");
printf("Qualquer outro número- Não\n");
printf("\nSua opção:\t");
scanf("%i",&programa);
if(programa==1)
{
   textcolor(YELLOW);
   printf("----------------------------------------------------------------------------------------\n");
   textcolor(LIGHTGRAY);
   printf("As avaliações são feitas do valor 1 a 5\n");
   printf("1. Ortografia e facilidade de leitura do programa\n");
   printf("2. Facilidade de uso\n");
   printf("3. Resultados obtidos pelo programa e o seu conteúdo\n");
   printf("4. Aspecto e beleza do programa B)\n");
   printf("5. Este questionário\n");
   for(i=0;i<perguntas;i++)
   {
       printf("%iª:",i+1);
       scanf("%f",&avaliar[i]);
   }
    for(i=0;i<perguntas;i++){
    soma=soma+avaliar[i];
    media=soma/perguntas;
    }
    textcolor(YELLOW);
    printf("Média da avaliação: %.2f\n",media);
    fprintf(medias,"%.2f\n",media);
}
else
{

}

;break;


case 2: textcolor(WHITE);
    return;
;break;
default:textcolor(RED);
 printf("!Opção inválida o usuário não inseriu uma das 2 opções!\n");
}

textcolor(YELLOW);
printf("\n\n\nEscolha uma das opções:\n");
printf("1: Repetir o programa\n");
printf("Qualquer outra número: Encerrar o programa\n");
scanf("%d",&repetirmenu);
system("cls");
}while(repetirmenu==1);

textcolor(WHITE);
return 0;
}
