Escreva uma função em C++ chamada min_max que recebe como parâmetro um vetor V com n números
inteiros, identifica e retorna um par de valores correspondentes aos índices da primeira ocorrência do menor
elemento e da última ocorrência do maior elemento presente em V. Por exemplo, se a entrada
fosse V={5,4,1,3,1,10,7,10,6,8} a função deveria retornar o par {2,7}, correspondente às posições do
primeiro '1' em V[2] e do último '10' na posição V[7].
Um par de valores pode ser retornado por uma função através de um struct, vetor ou utilizando a classe
utilitária std::pair, nesta questão usaremos a std::pair. Assim a função deve ter a seguinte assinatura:
std::pair <size_t ,size_t> min_max ( int V[], size_t n );
