// Fig. 10.27: fig10_27.cpp
// Ocultando dados private de uma classe com a classe proxy.
#include <iostream>
using std::cout;
using std::endl;

#include "Interface.h" // Definição da classe Interface

int main()
{
   Interface i( 5 ); // cria objeto Interface
 
   cout << "Interface contains: " << i.getValue() 
      << " before setValue" << endl;

   i.setValue( 10 );

   cout << "Interface contains: " << i.getValue() 
      << " after setValue" << endl;
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
