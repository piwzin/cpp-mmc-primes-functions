# cpp-mmc-primes-functions

O MDC (Máximo Divisor Comum) é utilizado em diversos algoritmos e aplicações computacionais. O [algoritmo de Euclides](https://pt.wikipedia.org/wiki/Algoritmo_de_Euclides) é a descrição mais simples para calcular o MDC. A implementação desse algoritmo pode ser feita com chamadas sucessivas a mesma função, ou seja, uma função recursiva ou como uma repetição de comandos, sem a necessidade de recursividade.

O MMC ([Mínimo Múltiplo Comum](https://pt.wikipedia.org/wiki/M%C3%ADnimo_m%C3%BAltiplo_comum)) de dois números pode ser calculado a partir do MDC entre esses dois números.

Um número é dito **[primo](https://pt.wikipedia.org/wiki/N%C3%BAmero_primo)** se é divisível por um e por ele mesmo. Em algumas situações computacionais, comparar se dois números são primos, denota que o MDC deles é igual a 1 (um).

Escreva um programa que leia dois números inteiros positivos para calcular o MMC e se ambos são números primos.

O código da main.cpp já apresenta alguns comentários nas funções que podem auxiliar no desenvolvimento do programa.


## Exemplos de entrada de dados e a saída esperada

- ENTRADA: 2 5

        MDC(2, 5) = 1
        MMC(2, 5) = 10
        2 e 5 sao primos.

- ENTRADA: 2 8

        MDC(2, 8) = 2
        MMC(2, 8) = 8
        2 e 8 não sao primos

- ENTRADA: 211 19

        MDC(211, 19) = 1
        MMC(211, 19) = 4009
        211 e 19 sao primos.

- ENTRADA: 17 19

        MDC(17, 19) = 1
        MMC(17, 19) = 323
        17 e 19 sao primos.

- ENTRADA: 18 21

        MDC(18, 21) = 3
        MMC(18, 21) = 126
        18 e 21 não sao primos.
