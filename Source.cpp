#include<iostream>
#include<cstdlib>
#include<ctime>

//Процедурная функция
void say_hello() {// void Функция не возвращающая никаких значений и выводящая сообщения
	std::cout << "Hello world!\n";
	std::cout << "Bay world!\n";
}
void print_sum(int num1,int num2) {//   print_sum Функция не возвращающая никаких значений,но принимающая два числа и выводащая их сумму
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
}
int main() {
	setlocale(LC_ALL, "rus");
	int n, m;
	say_hello();
	say_hello();
	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	print_sum(n, m);
	print_sum(10, 7);













	return 0;

}