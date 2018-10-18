// Fig. 10.4: Increment.h
// Definição da classe Increment.
#ifndef INCREMENT_H
#define INCREMENT_H

class Increment 
{
public:
   Increment( int c = 0, int i = 1 ); // construtor padrão

   // Definição da função addIncrement
   void addIncrement() 
   { 
      count += increment; 
   } // fim da função addIncrement

   void print() const; // imprime count e increment
private:
   int count;
   const int increment; // membro de dados const
}; // fim da classe Increment

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
