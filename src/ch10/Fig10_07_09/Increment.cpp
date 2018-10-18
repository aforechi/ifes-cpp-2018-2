// Fig. 10.8: Increment.cpp
// Tentando inicializar uma constante de
// um tipo de dados predefinido com uma atribuição.
#include <iostream>
using std::cout;
using std::endl;

#include "Increment.h" // inclui a definição da classe Increment

// construtor; membro constante 'increment' não é inicializado    
Increment::Increment( int c, int i )                              
{                                                                 
   count = c; // permitida porque count não é constante           
   increment = i; // ERRO: Não é possível modificar um objeto const
} // fim do construtor Increment                                  

// imprime valores de count e increment 
void Increment::print() const
{
   cout << "count = " << count << ", increment = " << increment << endl;
} // fim da função print


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
