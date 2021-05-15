// Questão 4) [SEMANA02_q04.c] Escreva um programa em C que resolva o seguinte problema proposto.
// Em uma universidade federal, o conceito final do estudante no TCC é definida por uma banca de três
// professores, em que prevalece o conceito atribuído pela maioria. A avaliação é considerada inconclusiva
// quando não é formada uma maioria entre as notas atribuídas (ou seja, em caso de empate entre os
// conceitos atribuídos). Os conceitos possíveis, em ordem do conceito mais alto para o mais baixo, são: A,
// B, C, ou D, neste último o aluno é considerado reprovado. Escreva um programa que leia três números
// distintos de 1 a 4, para representar respectivamente cada um dos conceitos A, B, C, e D. O programa deve
// informar se o aluno foi aprovado e qual o conceito obtido, se ele foi reprovado, ou apenas se o resultado
// da banca é inconclusivo. Apenas a título de curiosidade, quando acontece este último caso, uma nova
// banca deve ser agendada.
// Entrada: três números inteiros, representando os conceitos atribuídos por cada membro da banca ao
// trabalho de TCC.
// Saída: uma das seguintes possibilidades: a palavra APROVADO COM seguido do conceito
// correspondente; somente a palavra REPROVADO; ou INCONCLUSIVO, para o caso em que a banca
// divergiu completamente

// #include <stdio.h>

// int main(void){
// int a,b,c;
// scanf("%i %i %i",&a,&b,&c);
// if(
//   (a==4&&b==4&&c==4)||
//   (a==4&&b==4&&c==1)||
//   (a==4&&b==4&&c==2)||
//   (a==4&&b==4&&c==3)||
//   (a==1&&b==4&&c==4)||
//   (a==2&&b==4&&c==4)||
//   (a==3&&b==4&&c==4)||
//   (a==4&&b==1&&c==4)||
//   (a==4&&b==2&&c==4)||
//   (a==4&&b==3&&c==4)
//   ){
//     printf("REPROVADO");
//   }
// else{
//   if(
//     (a==1&&b==2&&c==3)||
//     (a==1&&b==3&&c==2)||

//     (a==2&&b==3&&c==1)||
//     (a==2&&b==1&&c==3)||

//     (a==3&&b==1&&c==2)||
//     (a==3&&b==2&&c==1)||

//     (a==4&&b==1&&c==2)||
//     (a==4&&b==2&&c==1)||

//     ){
//       printf("INCONCLUSIVO");}
// else{
//   if(
//     (a==3&&b==3&&c==3)||
//     (a==3&&b==3&&c==1)||
//     (a==3&&b==3&&c==2)||
//     (a==3&&b==3&&c==4)||
//     (a==1&&b==3&&c==3)||
//     (a==2&&b==3&&c==3)||
//     (a==4&&b==3&&c==3)||
//     (a==3&&b==1&&c==3)||
//     (a==3&&b==2&&c==3)||
//     (a==3&&b==4&&c==3)
//     ){
//       printf("APROVADO COM C");}
// else{
//   if(
//     (a==2&&b==2&&c==2)||
//     (a==2&&b==2&&c==1)||
//     (a==2&&b==2&&c==3)||
//     (a==2&&b==2&&c==4)||
//     (a==1&&b==2&&c==2)||
//     (a==3&&b==2&&c==2)||
//     (a==4&&b==2&&c==2)||
//     (a==2&&b==1&&c==2)||
//     (a==2&&b==3&&c==2)||
//     (a==2&&b==4&&c==2)
//     ){
//       printf("APROVADO COM B");}
// else{
//   if(
//     (a==1&&b==1&&c==1)||
//     (a==1&&b==1&&c==2)||
//     (a==1&&b==1&&c==3)||
//     (a==1&&b==1&&c==4)||
//     (a==2&&b==1&&c==1)||
//     (a==3&&b==1&&c==1)||
//     (a==4&&b==1&&c==1)||
//     (a==1&&b==2&&c==1)||
//     (a==1&&b==3&&c==1)||
//     (a==1&&b==4&&c==1)
//     ){}
//       printf("APROVADO COM A");}
// }
// }
// }

// return 0;
// }