#include <iostream>

void aula4() 
{
	int x;
	std::cout << "Entre um numero: ";
	std::cin >> x;

	int y;
	std::cout << "Entre outro numero: ";
	std::cin >> y;

	int z{x + y};
	
	std::cout << "A soma de " << x << " e " << y << " eh " << z << std::endl; 
}
