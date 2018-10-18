// Fig. 10.19: Time.cpp 
// Definições de função membro para a classe Time.
#include <iostream>
using std::cout;

#include <iomanip>
using std::setfill;
using std::setw;

#include "Time.h" // Definição da classe Time

// função constructor para inicializar dados private;
// chama a função membro setTime para configurar variáveis;
// valores padrão são 0 (ver definição de classe)
Time::Time( int hr, int min, int sec ) 
{ 
   setTime( hr, min, sec ); 
} // fim do construtor de Time

// configura valores de hour, minute e second
Time &Time::setTime( int h, int m, int s ) // observe Time & return
{
   setHour( h );
   setMinute( m );
   setSecond( s ); 
   return *this; // permite cascateamento
} // fim da função setTime

// configura valor de hour
Time &Time::setHour( int h ) // observe Time & return
{
   hour = ( h >= 0 && h < 24 ) ? h : 0; // valida horas
   return *this; // permite cascateamento
} // fim da função setHour

// configura valor de minute
Time &Time::setMinute( int m ) // observe Time & return
{
   minute = ( m >= 0 && m < 60 ) ? m : 0; // valida minutos
   return *this; // permite cascateamento
} // fim da função setMinute

// configura valor de second
Time &Time::setSecond( int s ) // observe Time & return
{
   second = ( s >= 0 && s < 60 ) ? s : 0; // valida segundos
   return *this; // permite cascateamento
} // fim da função setSecond

// obtém valor da hora
int Time::getHour() const 
{ 
   return hour; 
} // fim da função getHour

// obtém valor dos minutos
int Time::getMinute() const 
{ 
   return minute; 
} // fim da função getMinute

// obtém valor dos segundos
int Time::getSecond() const 
{ 
   return second; 
} // fim da função getSecond

// imprime a hora no formato de data/hora universal (HH:MM:SS)
void Time::printUniversal() const
{
   cout << setfill( '0' ) << setw( 2 ) << hour << ":"
      << setw( 2 ) << minute << ":" << setw( 2 ) << second;
} // fim da função printUniversal

// imprime a hora no formato padrão de data/hora (HH:MM:SS AM ou PM)
void Time::printStandard() const
{
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
      << ":" << setfill( '0' ) << setw( 2 ) << minute
      << ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM" );
} // fim da função printStandard


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
