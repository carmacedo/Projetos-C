#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>





int main()
{int opcao1;

setlocale(LC_ALL,"portuguese");
system("mode 100,55");
puts("\t\t\tUm programa criado por: José Leal");
system("PAUSE");
system("cls");

puts("\t\t\tBem vindo ao");
puts("");
puts(" _____   _____        ___   __   _   _____   _____        _____     _   _   _   ______  ");
puts("/  ___| |  _  \\      /   | |  \\ | | |  _  \\ | ____|      /  _  \\   | | | | | | |___  /  ");
puts("| |     | |_| |     / /| | |   \\| | | | | | | |__        | | | |   | | | | | |    / /   ");
puts("| |  _  |  _  /    / / | | | |\\   | | | | | |  __|       | | | |   | | | | | |   / /    ");
puts("| |_| | | | \\ \\   / /  | | | | \\  | | |_| | | |___       | |_| |_  | |_| | | |  / /__   ");
puts("\\_____/ |_|  \\_\\ /_/   |_| |_|  \\_| |_____/ |_____|      \\_______| \\_____/ |_| /_____|  ");
puts("");
system("PAUSE");
system("cls");

puts("____________________________________");
puts("____________________________________");
puts("\tGRANDE QUIZ");
puts("____________________________________");
puts("____________________________________");
puts("\tSelecione:");
puts("> 1 para começar a jogar!");
puts("> 2 para ver a pontuação máxima");
puts("> 3 para limpar a pontuação");
puts("> 4 para saber como jogar");
puts("> 5 para Sair");
scanf("%i",&opcao1);
system("cls");

switch(opcao1)
{
    case 1:/* Função para o jogo*/
    case 2:/* Função para ver pontuação máxima*/
    case 3:/* Função para limpar a pontuação*/
    case 4:/* Função para instruções*/
    case 5:puts("Obrigado por jogar! Volte sempre!");break;




    default:;break;
}



}
