// Fig. 12.7: BasePlusCommissionEmployee.h
// Definição da classe BasePlusCommissionEmployee representa um empregado
// que recebe um salário-base além da comissão.
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // classe string padrão C++ 
using std::string;

class BasePlusCommissionEmployee
{
public:
   BasePlusCommissionEmployee( const string &, const string &, 
      const string &, double = 0.0, double = 0.0, double = 0.0 );
   
   void setFirstName( const string & ); // configura o nome
   string getFirstName() const; // retorna o nome

   void setLastName( const string & ); // configura o sobrenome
   string getLastName() const; // retorna o sobrenome

   void setSocialSecurityNumber( const string & ); // configura o SSN
   string getSocialSecurityNumber() const; // retorna o SSN 

   void setGrossSales( double ); // configura a quantidade de vendas brutas
   double getGrossSales() const; // retorna a quantidade de vendas brutas

   void setCommissionRate( double ); // configura a taxa de comissão
   double getCommissionRate() const; // retorna a taxa de comissão

   void setBaseSalary( double ); // configura o salário-base
   double getBaseSalary() const; // retorna o salário-base 

   double earnings() const; // calcula os rendimentos
   void print() const; // imprime o objeto BasePlusCommissionEmployee
private:
   string firstName;
   string lastName;
   string socialSecurityNumber;
   double grossSales; // vendas brutas semanais
   double commissionRate; // porcentagem da comissão
   double baseSalary; // salário-base
}; // fim da classe BasePlusCommissionEmployee

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
