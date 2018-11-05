// Fig. 12.15: BasePlusCommissionEmployee.cpp
// Definições de função membro da classe BasePlusCommissionEmployee.
#include <iostream>
using std::cout;

// Definição da classe BasePlusCommissionEmployee
#include "BasePlusCommissionEmployee.h"

// construtor
BasePlusCommissionEmployee::BasePlusCommissionEmployee( 
   const string &first, const string &last, const string &ssn, 
   double sales, double rate, double salary ) 
   // chama explicitamente o construtor da classe básica             
   : CommissionEmployee( first, last, ssn, sales, rate )
{
   setBaseSalary( salary ); // valida e armazena o salário-base
} // fim do construtor BasePlusCommissionEmployee

// configura o salário-base
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
   baseSalary = ( salary < 0.0 ) ? 0.0 : salary;
} // fim da função setBaseSalary

// retorna o salário-base
double BasePlusCommissionEmployee::getBaseSalary() const
{
   return baseSalary;
} // fim da função getBaseSalary

// calcula os rendimentos
double BasePlusCommissionEmployee::earnings() const
{
   // pode acessar dados protected da classe básica   
   return baseSalary + ( commissionRate * grossSales );
} // fim da função earnings

// imprime o objeto BasePlusCommissionEmployee
void BasePlusCommissionEmployee::print() const
{
   // pode acessar dados protected da classe básica                     
   cout << "base-salaried commission employee: " << firstName << ' '    
      << lastName << "\nsocial security number: " << socialSecurityNumber
      << "\ngross sales: " << grossSales                                
      << "\ncommission rate: " << commissionRate                        
      << "\nbase salary: " << baseSalary;                               
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
