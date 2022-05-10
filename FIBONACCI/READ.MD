Implemente uma função em C++ chamada fib_below_n que recebe um valor inteiro positivo n e armazena os
termos da série de Fibonacci inferiores a n em um vetor do tipo std::vector. A função deve então retornar esse
objeto usando o comando return. A classe std::vector representa um tipo de container que faz parte
da biblioteca padrão/STL(c++ tem um conjunto de bibliotecas padrão que provêem várias estruturas úteis
inexistentes em C) e representa a estrutura de dados lista dinâmica.
A função deve ter a seguinte assinatura:
std::vector<int> fib_below_n ( unsigned int n );
Relemebrando: A sequência de Fibonacci define-se como uma sequencia de números inteiros onde os dois
primeiros termos são iguais a 1 e cada termo seguinte é a soma dos dois termos imediatamente anteriores. Desta
forma se fosse fornecido ao programa uma entrada n = 15 o mesmo deveria produzir a seguinte sequência de
termos da série: {1; 1; 2; 3; 5; 8; 13}.
