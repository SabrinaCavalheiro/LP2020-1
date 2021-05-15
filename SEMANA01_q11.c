// Questão 11) [SEMANA01_q11.c] -- CRÉDITOS 2a. CharCode, 2016 -- Existem diversos tipos de
// códigos de barras, mas talvez o mais famoso seja o EAN13. O código de barras EAN13 é usado
// para identificar produtos de consumo e é composto por um conjunto de 13 números usados para
// codificar, dos quais 1 número é digito verificador, posicionado mais à esquerda do código.
// Exemplo Código de Barras EAN13
// O dígito verificador é usado para verificar se o código de barras foi lido corretamente, e é
// calculado com base nos demais dígitos, através de uma seqüência de 5 passos:
// 1. Some o valor de todos os dígitos em posições ímpares.
// 2. Multiplique esse resultado por 3.
// 3. Some o valor de todos os dígitos em posições pares.
// 4. Some este valor ao valor no passo 2.
// 5. Para criar o código verificador, determine o número que, quando adicionado ao
// número do passo 4, seja múltiplo de 10.
// Escreva um programa que, dado um código de barras, determine se a leitura está correta.
// Entrada: Uma seqüência de 13 dígitos decimais, separados por espaço.
// Saídas: O caractere S, se a seqüência corresponde a um código de barras válido; ou o caractere
// N caso contrário. Em ambos os casos, imprimir a quebra de linha.



// #include <stdio.h>
// int main(){
//   int a,b,c,d,e,f,g,h,i,j,k,l,m, restimpar,restpar, resultado;
//   //poição impar e par do b ao m, posicão a é o digito verificador.//
//   scanf("%i %i %i %i %i %i %i %i %i %i %i %i %i",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m);
//   //passo 1 somar todos que tem a posição impar//
//   restimpar=b+d+f+h+j+l;
//   //passo 2 multiplicar por tres o resultado da soma dos impares//
//   resultado=restimpar*3;
//   //passo 3 somar todos que tem a posição par//
//   restpar=c+e+g+i+k+m;
//   //passo 4 somar o resultado do passo 3 com o resultado do passo 2//
//   resultado+=restpar;
//   //passo 5 digito verificador//
//   if(
//    (resultado+a)%10==0){
//   printf("S\n");
//   }else{
//   printf("N\n");
//   }
// return 0;
// }