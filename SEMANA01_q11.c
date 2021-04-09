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