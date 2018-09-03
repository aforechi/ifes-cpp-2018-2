#include<iostream> 
#include<string> 

int aula9_1()
{
    std::string s1, s2;
    /* Ler strings */
    std::cin >> s1; 
    std::cin >> s2;
    /* Calcula comprimentos das strings */
    std::cout << "Comprimentos " << s1.size() << " " << s2.size();
    if (s1==s2)
        std::cout << "As strings são iguais";
    return 0; 
}