#include<iostream> 
#include<string> 
int main()
{
    std::string s1, s2;
    /* Ler strings */
    std::cin >> s1; 
    std::cin >> s2;
    s1+=s2; /* concatenar s2 a s1 */
    std::cout << s1;
    /* Procurar se a substring "casa" ocorre na string "minha casa"*/ 
    std::string s = "Minha casa";
    if(s.find("casa") < s.size())
        std::cout << "CASA está em MINHA CASA"; 
    return 0;
}