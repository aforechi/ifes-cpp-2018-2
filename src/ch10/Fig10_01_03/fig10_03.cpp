// Fig. 10.3: fig10_03.cpp
// Tentando acessar um objeto const com funções membro não-const.
#include "Time.h" // inclui definição da classe Time

int main()
{
   Time wakeUp( 6, 45, 0 ); // objeto não-constante
   const Time noon( 12, 0, 0 ); // objeto constante

                          // OBJETO      FUNÇÃO MEMBRO 
   wakeUp.setHour( 18 );  // não-const   não-const
   
   noon.setHour( 12 );    // const       non-const
   
   wakeUp.getHour();      // não-const   const
   
   noon.getMinute();      // const           const
   noon.printUniversal(); // const           const
   
   noon.printStandard();  // const       non-const
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
