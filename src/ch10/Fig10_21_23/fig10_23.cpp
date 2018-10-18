// Fig. 10.23: fig10_23.cpp
// Driver para testar a classe Employee.
#include <iostream>
using std::cout;
using std::endl;

#include "Employee.h" // Definição da classe Employee

int main()
{
   // utiliza o nome da classe e o operador de resolução de escopo binário para
   // acessar a função static number getCount 
   cout << "Number of employees before instantiation of any objects is "
      << Employee::getCount() << endl; // utiliza o nome da classe

   // utiliza new para criar dinamicamente dois novos Employees
   // operador new também chama o construtor do objeto        
   Employee *e1Ptr = new Employee( "Susan", "Baker" );        
   Employee *e2Ptr = new Employee( "Robert", "Jones" );       

   // chama getCount no primeiro objeto Employee
   cout << "Number of employees after objects are instantiated is "
      << e1Ptr->getCount();

   cout << "\n\nEmployee 1: " 
      << e1Ptr->getFirstName() << " " << e1Ptr->getLastName() 
      << "\nEmployee 2: " 
      << e2Ptr->getFirstName() << " " << e2Ptr->getLastName() << "\n\n";

   delete e1Ptr; // desaloca memória                                   
   e1Ptr = 0; // desconecta o ponteiro do espaço de armazenamento livre.
   delete e2Ptr; // desaloca memória                                   
   e2Ptr = 0; // desconecta o ponteiro do espaço de armazenamento livre.

   // não existe nenhum objeto, portanto, chama a função membro static getCount
   // utilizando o nome da classe e o operador de resolução de escopo binário
   cout << "Number of employees after objects are deleted is "
      << Employee::getCount() << endl;
   return 0;
} // fim de main


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
