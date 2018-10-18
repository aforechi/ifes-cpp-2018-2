// Fig. 10.15: fig10_15.cpp  
// Friends podem acessar membros private de uma classe.
#include <iostream>
using std::cout;
using std::endl;

// Definição da classe Count
class Count 
{
   friend void setX( Count &, int ); // declaração friend
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

// a função setX pode modificar os dados private de Count     
// porque setX é declarada como uma amiga de Count (linha 10) 
void setX( Count &c, int val )                                
{                                                             
   c.x = val; // permitido pois setX Count é uma amiga de Count
} // fim da função setX                                       

int main()
{
   Count counter; // cria o objeto Count

   cout << "counter.x after instantiation: ";
   counter.print();

   setX( counter, 8 ); // configura x utilizando uma função friend
   cout << "counter.x after call to setX friend function: ";
   counter.print();
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
