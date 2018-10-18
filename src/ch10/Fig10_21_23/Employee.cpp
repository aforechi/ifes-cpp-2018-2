// Fig. 10.22: Employee.cpp
// Definições de função membro da classe Employee.
#include <iostream>
using std::cout;
using std::endl;

#include <cstring> // protótipos de strlen e strcpy
using std::strlen;
using std::strcpy;

#include "Employee.h" // Definição da classe Employee 

// define e inicializa o membro de dados static no escopo de arquivo
int Employee::count = 0;                                 

// define a função membro static que retorna o número de         
// objetos Employee instanciados (static declarado em Employee.h)
int Employee::getCount()                                        
{                                                               
   return count;                                                
} // fim da função static getCount                               

// o construtor aloca dinamicamente espaço para o nome e o sobrenome e
// usa strcpy para copiar o nome e o sobrenome para o objeto
Employee::Employee( const char * const first, const char * const last )
{
   firstName = new char[ strlen( first ) + 1 ];
   strcpy( firstName, first );

   lastName = new char[ strlen( last ) + 1 ];
   strcpy( lastName, last );

   count++; // incrementa contagem estática de empregados

   cout << "Employee constructor for " << firstName
      << ' ' << lastName << " called." << endl;
} // fim do construtor Employee

// o destrutor desaloca memória dinamicamente alocada
Employee::~Employee()
{
   cout << "~Employee() called for " << firstName
      << ' ' << lastName << endl;

   delete [] firstName; // libera memória 
   delete [] lastName; // libera memória  

   count--; // decrementa contagem estática de empregados
} // fim do destrutor ~Employee

// retorna o nome do empregado
const char *Employee::getFirstName() const
{
   // const antes do tipo de retorno impede que o cliente modifique
   // dados private; o cliente deve copiar a string retornada antes de
   // o destrutor excluir o armazenamento para impedir um ponteiro indefinido
   return firstName;
} // fim da função getFirstName

// retorna sobrenome do empregado
const char *Employee::getLastName() const
{
   // const antes do tipo de retorno impede que o cliente modifique
   // dados private; o cliente deve copiar a string retornada antes de
   // o destrutor excluir o armazenamento para impedir um ponteiro indefinido
   return lastName;
} // fim da função getLastName


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
