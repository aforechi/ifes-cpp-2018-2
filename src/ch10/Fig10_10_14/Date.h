// Fig. 10.10: Date.h 
// Definição da classe Date; funções membro definidas em Date.cpp
#ifndef DATE_H
#define DATE_H

class Date 
{
public:
   Date( int = 1, int = 1, int = 1900 ); // construtor padrão
   void print() const; // imprime data no formato mês/dia/ano
   ~Date(); // fornecida para confirmar a ordem de destruição
private:
   int month; // 1-12 (Janeiro-Dezembro)
   int day; // 1-31 conforme o mês
   int year; // qualquer ano

   // função utilitária para verificar se o dia é adequado para o mês e ano
   int checkDay( int ) const; 
}; // fim da classe Date

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
