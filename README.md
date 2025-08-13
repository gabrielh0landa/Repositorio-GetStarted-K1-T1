# Descrição de Projeto

---

### O que é?

Este é um repositório que possui um código feito a partir de um desafio tirado do site projecteuler.net. O desafio é encontrar a soma dos 4.000.000 primerios números pares da sequência de Fibonacci

### Notas Adicionais

O link para o desafio é: `https://projecteuler.net/problem=2`
---

### Explicação da lógica usada

Este código calcula a soma dos números pares da sequência de Fibonacci que são menores ou iguais a 4.000.000. A sequência começa com 1 e 1, e a cada iteração o próximo número (cont) é obtido somando os dois anteriores (ultimo_elemt e penultimo_elemt). Se o número gerado for par, ele é adicionado à variável soma. O laço continua até que o valor de cont ultrapasse 4.000.000. Ao final, o programa imprime cada número da sequência gerado e, por fim, exibe a soma total dos pares encontrados.

```c
  while(cont <= 4000000){
    
     cont = ultimo_elemt + penultimo_elemt;
     penultimo_elemt = ultimo_elemt;
     ultimo_elemt = cont;

     if(cont % 2 == 0){
       soma = soma + cont;
     }
```


---

### Conclusão

É possível ter várias soluções para este problema. Mas, essa aboradagem adotada tem a principal vantagem na eficiência e simplicidade para calcular a soma dos números pares da sequência de Fibonacci até um limite (no caso, 4.000.000), sem armazenar todos os elementos da sequência.



