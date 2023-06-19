#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "opcao1.h"


int main()
{int opcao1;

setlocale(LC_ALL,"portuguese");
system("mode 100,35");
system("color 70");

a:b:
    system("cls");
    puts("\tUm programa criado por: José Leal");
    getch();
    system("cls");
    puts("___________________________________________");
    puts("______Bem vindo ao GRANDE QUIZ (beta)______");
    puts("___________________________________________");
    puts("_________________Menu______________________");
    puts("___________________________________________");
    puts("\tSelecione:");
    puts("");
    puts(">>>> 1 para começar a jogar! (Modo de 3 e 4 jogadores Brevemente Disponível!)");
    puts("");
    puts(">>>> 2 para ver a pontuação máxima");
    puts("");
    puts(">>>> 3 para saber como jogar");
    puts("");
    puts(">>>> 4 para Sair");
    scanf("%i",&opcao1);
    system("cls");
    switch(opcao1)
    {
        case 1:numjodadores();
                goto v;break;


        case 2:v:pontuacoes();
                goto a;break;

        case 3:instrucoes();
        goto a;break;



        default:
            puts("Tem a certeza que deseja sair? [s-Sim; n-Não]");
            if(toupper(getch())=='s')
            {
                goto a;
            }
            else
            {
             puts("Obrigado por jogar! Volte sempre!");
             getch();
             exit("exit_sucess");
            };break;/* Função para sair*/
    }

}
