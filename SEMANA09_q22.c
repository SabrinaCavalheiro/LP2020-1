// Como no meme do garotinho do mi-mi-mi, leia uma frase de até 50
// caracteres e substitua toda vogal por ‘i’ ou por ‘I’, conforme a forma da vogal original. Considere que
// nenhuma vogal da entrada é acentuada.
// Entrada: uma string de até 50 caracteres.
// Saída: string com todas vogais substituidas por ‘i’ onde a orignal é minúscula, ou por ‘I’onde a original é
// maiúscula.



// #include <stdio.h>
// int main(){
//   char frase[50];
//   int vogal=0;
//   gets(frase);
//   while(frase[vogal]!='\0')
//   if(vogal<50){
//     if(frase[vogal]=='a'||frase[vogal]=='e'||frase[vogal]=='i'||frase[vogal]=='o'||frase[vogal]=='u'){
//     frase[vogal]='i';
//     }else
//     if(frase[vogal]=='A'||frase[vogal]=='E'||frase[vogal]=='I'||frase[vogal]=='O'||frase[vogal]=='U'){
//     frase[vogal]='I';
//     }
//     vogal++;
//   }
//   printf("%s\n",frase);
  
//   return 0;
// }