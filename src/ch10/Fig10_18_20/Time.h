// Fig. 10.18: Time.h
// Colocando chamadas de função membro em cascata.

// Definição da classe Time.
// Funções membro definidas em Time.cpp.
#ifndef TIME_H
#define TIME_H

class Time 
{
public:
   Time( int = 0, int = 0, int = 0 ); // construtor padrão

   // funções set (os tipos de retorno Time & permitem cascateamento)
   Time &setTime( int, int, int ); // configura hour, minute, second
   Time &setHour( int ); // configura hour                          
   Time &setMinute( int ); // configura minute                      
   Time &setSecond( int ); // configura second                      

   // funções get (normalmente declaradas const)
   int getHour() const; // retorna hour 
   int getMinute() const; // retorna minute
   int getSecond() const; // retorna second

   // funções print (normalmente declaradas const)
   void printUniversal() const; // imprime hora universal
   void printStandard() const; // imprime a hora padrão
private:
   int hour; // 0 - 23 (formato de relógio de 24 horas)
   int minute; // 0 - 59
   int second; // 0 - 59
}; // fim da classe Time

#endif


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
