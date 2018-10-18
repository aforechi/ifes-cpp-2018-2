// Fig. 10.2: Time.cpp
// Definições de função membro para a classe Time.
#include <iostream>
using std::cout;

#include <iomanip>
using std::setfill;
using std::setw;

#include "Time.h" // inclui definição da classe Time

// função constructor para inicializar dados private;
// chama a função membro setTime para configurar variáveis;
// valores padrão são 0 (ver definição da classe)
Time::Time( int hour, int minute, int second ) 
{ 
   setTime( hour, minute, second ); 
} // fim do construtor de Time

// configura valores de hour, minute e second
void Time::setTime( int hour, int minute, int second )
{
   setHour( hour );
   setMinute( minute );
   setSecond( second );
} // fim da função setTime

// configura valor de hour
void Time::setHour( int h ) 
{
   hour = ( h >= 0 && h < 24 ) ? h : 0; // valida horas
} // fim da função setHour

// configura valor de minute
void Time::setMinute( int m )
{ 
   minute = ( m >= 0 && m < 60 ) ? m : 0; // valida minutos
} // fim da função setMinute

// configura valor de second
void Time::setSecond( int s )
{ 
   second = ( s >= 0 && s < 60 ) ? s : 0; // valida segundos
} // fim da função setSecond

// retorna valor de hour
int Time::getHour() const // funções get devem ser const
{ 
   return hour; 
} // fim da função getHour

// retorna valor de minute
int Time::getMinute() const
{
   return minute; 
} // fim da função getMinute

// retorna valor de second
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
void Time::printStandard() // note a falta da declaração const
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
