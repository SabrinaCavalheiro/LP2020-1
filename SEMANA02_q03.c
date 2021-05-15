// Questão 3) [SEMANA02_q03.c] Escreva um programa em C que receba 3 valores reais correspondentes
// às medidas dos lados de um triângulo informe se é um triângulo EQUILÁTERO (três lados iguais),
// ISÓSCELES (dois lados iguais) ou ESCALENO (3 lados diferentes), ou ainda informe NÃO FORMA caso
// as medidas não formem triângulo. A condição para formação de um triângulo é que a soma das medidas
// menores tem que ser maior que a maior medida.
// Entrada: três valores reais
// Saída: uma das quatro mensagens EQUILÁTERO, ISÓSCELES, ESCALENO, NÃO FORMA.


// #include <stdio.h>

// int main(void){
//   float a,b,c;
//   scanf ("%f %f %f",&a,&b,&c);
  
// if (a+b<=c || a+c<=b || a+b<=c) {
//   printf("NÃO FORMA");
//   }else{
//     if (a==b && b==c){
//   printf ("EQUILÁTERO");
//   }
//   else{
//     if (a==b||b==c||c==a){
//       printf("ISÓCELES");
//       }else{
//       printf("ESCALENO");
//       }
//       }
//       }
//       return 0;
//       }