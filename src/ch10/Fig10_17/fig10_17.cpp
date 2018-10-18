// Fig. 10.17: fig10_17.cpp  
// Utilizando o ponteiro this para referenciar membros de objeto.
#include <iostream>
using std::cout;
using std::endl;

class Test 
{
public:
   Test( int = 0 ); // construtor padrão
   void print() const;
private:
   int x;
}; // fim da classe Test

// construtor
Test::Test( int value ) 
   : x( value ) // inicializa x como value
{ 
   // corpo vazio
} // fim do construtor Test

// imprime x utilizando ponteiros this implícito e explícito;
// os parênteses em torno de *this são requeridos
void Test::print() const   
{
   // utiliza implicitamente o ponteiro this para acessar o membro x
   cout << "        x = " << x;                                    

   // utiliza explicitamente o ponteiro this e o operador seta
   // para acessar o membro x                                
   cout << "\n  this->x = " << this->x;                      

   // utiliza explicitamente o ponteiro this desreferenciado e
   // o operador ponto para acessar o membro x               
   cout << "\n(*this).x = " << ( *this ).x << endl;          
} // fim da função print

int main()
{
   Test testObject( 12 ); // instancia e inicializa testObject

   testObject.print();
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
