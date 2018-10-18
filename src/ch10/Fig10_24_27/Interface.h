// Fig. 10.25: Interface.h
// Arquivo de cabeçalho da classe Interface
// O cliente vê esse código-fonte, mas o código-fonte não revela
// o layout de dados da classe Implementation.

class Implementation; // declaração de classe antecipada requerida pela linha 17

class Interface 
{
public:
   Interface( int ); // construtor
   void setValue( int ); // mesma interface public que
   int getValue() const; // a classe Implementation tem
   ~Interface(); // destrutor
private:
   // requer a declaração antecipada anterior (linha 6)
   Implementation *ptr;                               
}; // fim da classe Interface


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
