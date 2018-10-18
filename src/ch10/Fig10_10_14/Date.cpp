// Fig. 10.11: Date.cpp
// Definições de função membro da classe Date.
#include <iostream>
using std::cout;
using std::endl;

#include "Date.h" // inclui definição da classe Date

// construtor confirma valor adequado para month; chama
// função utilitária checkDay para confirmar o valor adequado para day
Date::Date( int mn, int dy, int yr )
{
   if ( mn > 0 && mn <= 12 ) // valida month
      month = mn;
   else 
   {                     
      month = 1; // mês inválido configurado como 1
      cout << "Invalid month (" << mn << ") set to 1.\n";
   } // fim de else

   year = yr; // poderia validar yr
   day = checkDay( dy ); // validade de day

   // gera saída do objeto Date para mostrar quando seu construtor é chamado
   cout << "Date object constructor for date ";
   print();                   
   cout << endl;
} // fim do construtor Date

// imprime objeto Date na forma de mês/dia/ano
void Date::print() const
{
   cout << month << '/' << day << '/' << year; 
} // fim da função print

// gera saída do objeto Date para mostrar quando seu destrutor é chamado
Date::~Date()
{ 
   cout << "Date object destructor for date ";
   print();
   cout << endl;
} // fim do destrutor ~Date

// função utilitária para confirmar valor adequado de day 
// com base em month e year; também trata anos bissextos 
int Date::checkDay( int testDay ) const
{
   static const int daysPerMonth[ 13 ] = 
      { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   // determina se testDay é válido durante mês especificado
   if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
      return testDay;

   // verificação 29 de fevereiro para ano bissexto
   if ( month == 2 && testDay == 29 && ( year % 400 == 0 || 
      ( year % 4 == 0 && year % 100 != 0 ) ) )
      return testDay;

   cout << "Invalid day (" << testDay << ") set to 1.\n";
   return 1; // deixa o objeto em estado consistente se valor ruim
} // fim da função checkDay


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
