// Fig. 10.24: Implementation.h
// Arquivo de cabeçalho para a classe Implemention 

class Implementation 
{
public:
   // construtor
   Implementation( int v )  
      : value( v ) // inicializa value como v
   { 
      // corpo vazio
   } // fim do construtor de Implementation

   // configura valor como v
   void setValue( int v )   
   { 
      value = v; // deve validar v
   } // fim da função setValue

   // retorna value
   int getValue() const      
   { 
      return value; 
   } // fim da função getValue
private:
   int value; // dados que gostaríamos de ocultar do cliente
}; // fim da classe Implemention


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
