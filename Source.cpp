#include<iostream>
#include<cstdlib>
#include<ctime>

//����������� �������
void say_hello() {// void ������� �� ������������ ������� �������� � ��������� ���������
	std::cout << "Hello world!\n";
	std::cout << "Bay world!\n";
}
void print_sum(int num1,int num2) {//   print_sum ������� �� ������������ ������� ��������,�� ����������� ��� ����� � ��������� �� �����
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
}
int main() {
	setlocale(LC_ALL, "rus");
	int n, m;
	say_hello();
	say_hello();
	std::cout << "������� ��� ����� -> ";
	std::cin >> n >> m;
	print_sum(n, m);
	print_sum(10, 7);













	return 0;

}