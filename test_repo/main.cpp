#include <iostream>

void f();
void g();

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

void g()
{
	std::cout << 0 << std::endl;
}
