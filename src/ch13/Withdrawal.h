// Fig. 13.31: Withdrawal.h
// Definição da classe Withdrawal que representa uma transação de retirada
#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include "Transaction.h" // Definição da classe Transaction

class Keypad; // declaração antecipada da classe Keypad
class CashDispenser; // declaração antecipada da classe CashDispenser

// a classe Withdrawal deriva da classe básica Transaction
class Withdrawal : public Transaction
{
public:
   // membro função que sobrescreve execute na classe básica Transaction
   virtual void execute(); // realiza a transação
private:
   // atributos
   double amount; // quantia a sacar
   Keypad &keypad; // referência ao teclado do ATM
   CashDispenser &cashDispenser; // referência ao dispensador de notas do ATM
}; // fim da classe Withdrawal

#endif // WITHDRAWAL_H


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
