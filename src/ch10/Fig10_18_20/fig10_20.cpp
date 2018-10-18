// Fig. 10.20: fig10_20.cpp
// Colocando chamadas de função membro em cascata com o ponteiro this.
#include <iostream>
using std::cout;
using std::endl;

#include "Time.h" // Definição da classe Time

int main()
{
   Time t; // cria o objeto Time

   // chamadas de função em cascata               
   t.setHour( 18 ).setMinute( 30 ).setSecond( 22 );

   // gera saída da hora nos formatos universal e padrão
   cout << "Universal time: ";
   t.printUniversal();

   cout << "\nStandard time: ";
   t.printStandard();

   cout << "\n\nNew standard time: ";

   // chamadas de função em cascata       
   t.setTime( 20, 20, 20 ).printStandard();
   cout << endl;
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
