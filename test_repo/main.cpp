#include <iostream>

void f();
void g();
void h();

int main(int argc, char** argv)
{
	std::cout << "Hello, World!" << std::endl;

	f();

	system("pause");

	h();
	
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

void h()
{
	std::cout << -1 << std::endl;
}
