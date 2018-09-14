#include <iostream>
#include <string>

std::string criptografar(std::string mensagem, std::string chave)
{
    std::string mensagem_embaralhada;
    //coloque seu codigo aqui
    return mensagem_embaralhada;
}

void cripto()
{
    std::string chave, mensagem, mensagem_criptografada, mensagem_descriptografada;
    
    std::cout << "Digite a mensagem a ser criptografada:" << std::endl;
    std::getline(std::cin, mensagem);

    std::cout << "Informe a chave de criptografia:" << std::endl;
    std::getline(std::cin, chave);
    
    mensagem_criptografada = criptografar(mensagem, chave);
    
    std::cout << "Mensagem criptografada:" << mensagem_criptografada << std::endl;

    mensagem_descriptografada = criptografar(mensagem_criptografada, chave);
    
    std::cout << "Mensagem descriptografada:" << mensagem_descriptografada << std::endl;
    
}
