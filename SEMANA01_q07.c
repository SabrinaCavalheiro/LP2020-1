// Questão 7) [SEMANA01_q07.c] Em um dado caixa eletrônico estão disponíveis cédulas de 100, de 50,
// de 20, de 10, de 5, de 2, e de 1 real. Escreva um programa que receba um número inteiro correspondente
// ao valor que o cliente deseja sacar, e informe o número de notas de cada tipo que compõe a saída.
// Priorize sempre distribuir as notas de maior valor primeiro.
// Entrada: Um número inteiro indicando o valor que deseja ser sacado.
// Saída: A lista de notas e respectivas quantidades que precisam ser emitidas para atender o cliente.

// #include <stdio.h>
// int main(){
//   int valor, resultado, n100,n50,n20,n10,n5,n2,n1;
//   scanf("%i",&valor);
// //notade100 = valor posto / 100 o resultado você faz igual ao valor % a notade100// 

//   n100=valor/100;
//   resultado=valor%100;
//   printf(" %i notas de R$100\n",n100);

// //Aqui vai ser a notade50 = ao resultado da op. anterior / 50 e o resultado faz igual ao resultado memso % 50, e assim segue os outros.//
 
//   n50=resultado/50;
//   resultado=resultado%50;
//   printf(" %i notas de R$50\n",n50);

//   n20=resultado/20;
//   resultado=resultado%20;
//   printf(" %i notas de R$20\n",n20);

//   n10=resultado/10;
//   resultado=resultado%10;
//   printf(" %i notas de R$10\n",n10);

//   n5=resultado/5;
//   resultado=resultado%5;
//   printf(" %i notas de R$5\n",n5);

//   n2=resultado/2;
//   resultado=resultado%2;
//   printf(" %i notas de R$2\n",n2);

//   n1=resultado/1;
//   resultado=resultado%1;
//   printf(" %i notas de R$1\n",n1);

//   return 0;
//  }