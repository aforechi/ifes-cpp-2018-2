// Fig. 13.32: Transaction.h
// Definição da classe básica abstrata Transaction.
#ifndef TRANSACTION_H
#define TRANSACTION_H

class Screen; // declaração antecipada da classe Screen
class BankDatabase; // declaração antecipada da classe BankDatabase

class Transaction
{
public:
   int getAccountNumber(); // retorna o número da conta
   Screen &getScreen(); // retorna a referência à tela
   BankDatabase &getBankDatabase(); // retorna a ref. ao banco de dados do banco

   // função virtual pura para realizar a transação
   virtual void execute() = 0; // sobrescrita em classes derivadas
private:
   int accountNumber; // indica conta envolvida
   Screen &screen; // referência à tela do ATM
   BankDatabase &bankDatabase; // referência ao banco de dados de info da conta
}; // fim da classe Transaction

#endif // TRANSACTION_H


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
