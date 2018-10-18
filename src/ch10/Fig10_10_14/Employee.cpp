// Fig. 10.13: Employee.cpp
// Definições de função membro da classe Employee.
#include <iostream>
using std::cout;
using std::endl;

#include <cstring> // protótipos strlen e strncpy
using std::strlen;
using std::strncpy;

#include "Employee.h" // Definição da classe Employee
#include "Date.h" // Definição da classe Date

// construtor usa lista de inicializadores de membro p/ passar valores de inicializadores
// para construtores dos objetos membro birthDate e hireDate
// [Nota: Isso invoca o chamado "construtor de cópia padrão" que o
// compilador C++ fornece implicitamente.]   
Employee::Employee( const char * const first, const char * const last,
   const Date &dateOfBirth, const Date &dateOfHire )
   : birthDate( dateOfBirth ), // inicializa birthDate
     hireDate( dateOfHire ) // inicializa hireDate
{
   // copia primeiro para firstName e certifica-se de que ele se ajusta
   int length = strlen( first );
   length = ( length < 25 ? length : 24 );
   strncpy( firstName, first, length );
   firstName[ length ] = '\0';

   // copia por último para lastName e certifica-se de que ele se ajusta
   length = strlen( last );
   length = ( length < 25 ? length : 24 );
   strncpy( lastName, last, length );
   lastName[ length ] = '\0';

   // gera saída do objeto Employee para mostrar quando o construtor é chamado
   cout << "Employee object constructor: " 
      << firstName << ' ' << lastName << std::endl;
} // fim do construtor Employee

// imprime objeto Employee 
void Employee::print() const
{
   cout << lastName << ", " << firstName << "  Hired: ";
   hireDate.print();
   cout << "  Birthday: ";
   birthDate.print();
   cout << std::endl;
} // fim da função print

// gera saída do objeto Employee para mostrar quando seu destrutor é chamado
Employee::~Employee()
{ 
   cout << "Employee object destructor: " 
      << lastName << ", " << firstName << std::endl;
} // fim do destrutor ~Employee


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
