#include <stdio.h>


int main(){
  int ultimo_elemt = 1; 
  int penultimo_elemt = 1;
  int soma = 0;
  int cont = 0;
  
  while(cont <= 4000000){
    
     cont = ultimo_elemt + penultimo_elemt;
     penultimo_elemt = ultimo_elemt;
     ultimo_elemt = cont;

     if(cont % 2 == 0){
       soma = soma + cont;
     }
    
     printf("%d\n", cont);
    
   }
   
printf(" Aqui é a soma dos números pares da sequencia de Fibonacci até 4.000.000: %d\n", soma);

 
}