// Fig. 10.16: fig10_16.cpp 
// Funções não-friend/não-membro não podem acessar dados private de uma classe.
#include <iostream>
using std::cout;
using std::endl;

// Definição da classe Count (observe que não há declaração de amizade)
class Count 
{
public:
   // construtor
   Count() 
      : x( 0 ) // inicializa x como 0
   { 
      // corpo vazio
   } // fim do construtor de Count

   // gera saída de x
   void print() const       
   { 
      cout << x << endl; 
   } // fim da função print
private:
   int x; // membro de dados
}; // fim da classe Count

// função cannotSetX tenta modificar dados private de Count,                
// mas não pode porque a função não é amiga de Count                        
void cannotSetX( Count &c, int val )                                        
{                                                                           
   c.x = val; // ERROR: não é possível acessar o membro private member em Count
} // fim da função cannotSetX                                               

int main()
{
   Count counter; // cria o objeto Count

   cannotSetX( counter, 3 ); // cannotSetX não é friend
   return 0;
} // fim de main


/**************************************************************************
 * (C) Copyright 1992-2005 Deitel & Associates, Inc. e                    *
 * Pearson Education, Inc. Todos os direitos reservados                   *
 *                                                                        *
 * NOTA DE ISENÇÃO DE RESPONSABILIDADES: Os autores e o editor deste      *
 * livro empregaram seus melhores esforços na preparação do livro. Esses  *
 * esforços incluem o desenvolvimento, pesquisa e teste das teorias e     *
 * programas para determinar sua eficácia. Os autores e o editor não      *
 * oferecem nenhum tipo de garantia, explícita ou implicitamente, com     *
 * referência a esses programas ou à documentação contida nesses livros.  *
 * Os autores e o editor não serão responsáveis por quaisquer danos,      *
 * acidentais ou conseqüentes, relacionados com ou provenientes do        *
 * fornecimento, desempenho ou utilização desses programas.               *
 **************************************************************************/
