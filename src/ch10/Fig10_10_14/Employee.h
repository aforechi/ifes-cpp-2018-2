// Fig. 10.12: Employee.h
// Definição da classe Employee.
// Funções membro definidas em Employee.cpp.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Date.h" // inclui definição da classe Date

class Employee
{
public:
   Employee( const char * const, const char * const, 
      const Date &, const Date & );
   void print() const;
   ~Employee(); // fornecida para confirmar a ordem de destruição
private:
   char firstName[ 25 ];
   char lastName[ 25 ];
   const Date birthDate; // composição: Controle de acesso de membro
   const Date hireDate; // composição: Controle de acesso de membro
}; // fim da classe Employee

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
