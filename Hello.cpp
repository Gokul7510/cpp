#include <iostream>
#include <string>

int Multiply(int a, int b)
{
	return a * b;
}
int Add(int a, int b)
{
	return a + b;
}
int Divide(int a, int b)
{
	return a / b;
}
int Substract(int a, int b)
{
	return a - b;

}
void Getresult(int a, int b)
{
	int add_res = Add(a, b);
	int sub_res = Substract(a, b);
	int div_res = Divide(a, b);
	int mult_res = Multiply(a, b);
	std::cout << add_res << std::endl;
	std::cout << sub_res << std::endl;
	std::cout << div_res << std::endl;
	std::cout << mult_res << std::endl;
}
void Getoptions()
{
	std::cout << "enter the input" << std::endl;

	if(hoice==5)
}
int main()
{
	Getresult(3, 4);

}

