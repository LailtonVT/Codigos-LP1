# Soma de matrizes

Escreva um programa que calcule e exiba a média aritmética de dez inteiros, fornecidos pelo usuário, e que exiba todos os números maiores que o valor da média aritmética.

## Descrição do Programa
Este programa em C lê 10 números inteiros digitados pelo usuário, calcula a média aritmética desses números e, em seguida, exibe a média e os números maiores que a média.

## Funcionamento do Programa

1. O programa começa declarando variáveis necessárias, incluindo um array `numero` para armazenar os números digitados, uma variável `contador` para rastrear quantos números foram digitados, uma variável `mediaArit` para a média aritmética, um array `maioresQueMedia` para armazenar os números maiores que a média e uma variável `soma` para calcular a soma dos números.

2. Em seguida, entra em um loop `for` que permite que o usuário insira 10 números inteiros um por um usando a função `scanf`. Os números são armazenados no array `numero`, e o programa mantém o controle de quantos números foram inseridos usando a variável `contador`. Além disso, a variável `soma` é atualizada com a soma dos números.

3. Após a leitura dos números, o programa calcula a média aritmética, dividindo a soma pelo número de elementos inseridos, convertendo explicitamente para um valor de ponto flutuante para evitar uma divisão inteira.

4. Em seguida, o programa exibe a média calculada com uma precisão de uma casa decimal usando a função `printf`.

5. O programa, então, verifica quais números do array `numero` são maiores que a média aritmética e os exibe na tela, separados por espaços.

6. O programa termina com `return 0;`.

7. Execute o programa e insira os 10 números inteiros quando solicitado. Ele calculará a média e exibirá os números maiores que a média.



