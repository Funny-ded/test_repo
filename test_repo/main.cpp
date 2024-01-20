#include <iostream>

void f();

int main(int argc, char** argv)
{
	std::cout << "Hello, World!" << std::endl;

	system("pause");
	
	return EXIT_SUCCESS;
}

void f()
{
	std::cout << 42 << std::endl;
}
