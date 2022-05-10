Escreva um programa em C++ que lê um número não conhecido de valores inteiros e conta quantos deles estão
em cada um dos intervalos [0; 25), [25; 50), [50; 75), [75; 100) e fora desses intervalos. Para ler um número
indeterminado de valores basta incluir o comando de extração associado ao std::cin como condição de parada
em um laço (ver abaixo).
int x;
while( cin >> std::ws >> x) {
// realização da contagem em relação aos intervalos
}
Após encerrada a entrada de dados, o programa deve imprimir a porcentagem de números para cada um dos
quatro intervalos e de números fora deles, nessa ordem, um por linha e representados com quatro casas de
precisão. Para definir a precisão use a função std::setprecision(4) antes do uso do cout.
