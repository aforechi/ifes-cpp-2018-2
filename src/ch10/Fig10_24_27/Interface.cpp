// Fig. 10.26: Interface.cpp
// Implementação da classe Interface - o cliente recebe somente esse arquivo 
// como código-objeto precompilado, mantendo a implementação oculta.
#include "Interface.h" // Definição da classe Interface
#include "Implementation.h" // Definição da classe Implementation

// construtor
Interface::Interface( int v ) 
   : ptr ( new Implementation( v ) ) // inicializa ptr para apontar para
{                                    // um novo objeto Implementation
   // corpo vazio
} // fim do construtor Interface

// chama a função setValue de Implemention
void Interface::setValue( int v ) 
{ 
   ptr->setValue( v ); 
} // fim da função setValue

// chama a função getValue de Implemention
int Interface::getValue() const 
{ 
   return ptr->getValue(); 
} // fim da função getValue

// destrutor
Interface::~Interface() 
{ 
   delete ptr; 
} // fim do destrutor ~Interface


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
