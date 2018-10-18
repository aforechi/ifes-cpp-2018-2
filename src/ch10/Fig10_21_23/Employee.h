// Fig. 10.21: Employee.h
// Definição da classe Employee.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee 
{
public:
   Employee( const char * const, const char * const ); // construtor
   ~Employee(); // destrutor
   const char *getFirstName() const; // retorna o nome
   const char *getLastName() const; // retorna o sobrenome

   // função membro static                                        
   static int getCount(); // retorna número de objetos instanciados
private:
   char *firstName;
   char *lastName;

   // dados static                                   
   static int count; // número de objetos instanciados
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
