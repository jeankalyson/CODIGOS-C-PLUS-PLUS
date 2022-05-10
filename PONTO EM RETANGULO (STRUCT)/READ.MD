Considerando a estrutura abaixo para representar as coordenadas Cartesianas de um ponto no plano
bidimensional (2D), implemente uma função em C++ que verifica se um ponto P = (xp,yp), determinado por suas
coordenadas cartesianas, está localizado dentro, na borda ou fora de um retângulo definido por dois pontos: o
canto inferior esquerdo IE = (xie,yie) e o canto superior direito SD = (xsd, ysd).
Struct que descreve um ponto:
struct Ponto {
 int x; // ! < coordenada X do ponto.
 int y; // ! < coordenada y do ponto.
 // Construtor padrão
 Ponto ( int xi =0, int yi =0 ) : x{xi}, y{yi} // copia args para os campos x e y
 { /* nada */ }
};
A função a ser criada deve receber 3 pontos como referências constante representando, respectivamente, os dois
pontos, IE e SD, que definem um retângulo, e o ponto a ser testado P. Assuma que os pontos IE e SD definem
um retângulo válido, i.e IE≠SD (pelo menos uma coordenada de um ponto é diferente do outro). Dessa forma a
função deve ter a seguinte assinatura:
int pt_in_rect ( const Ponto &R1, cons t Ponto &R2, const Ponto &P );
A seguir, a função deve realizar testes e indicar se o ponto P está dentro, na borda ou fora do retângulo,
retornando, respectivamente, os valores 0, 1 ou 2 para cada caso ora descrito.
Se desejar tornar seu código mais inteligível, você pode utilizar a enumeração abaixo:
enum location_t : int { INSIDE =0, BORDER =1, OUTSIDE =2 };
Neste caso, modifique na assinatura da função o tipo do retorno para que seja location_t.
Conhecimentos necessários
Utilização de funções, tipos heterogêneos (struct), passagem de parâmetro por referência constante, uso de
enumerações, condicionais, expressões lógicas.
