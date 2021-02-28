// ConsoleApplication11.10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 11. Задача 10. Яйца.

#include <iostream>
#include <locale.h>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float depthMax=4., depthMin=0., depth, danger, dangerLevel, cubicMember, squareMember;
	cout << "\nУкажите максимально допустимый уровень опасности ";
	cin >> dangerLevel;
	if (dangerLevel < 0.) {
		cout << "\nУровень опасности должен быть не меньше нуля.";
		cout << "\nУкажите правильно уровень опасности.";
	}

	if (dangerLevel >= 0.) {
		danger = 10;
		while (danger > dangerLevel || danger < 0.) {
			depth = (depthMax + depthMin) / 2;
			cubicMember = pow(depth, 3.);
			squareMember = pow(depth, 2.);
			danger = cubicMember -3* squareMember-12 * depth + 10;
			if (danger < 0) {
				depthMax = (depthMax + depthMin) / 2;
			}
			if (danger > dangerLevel) {
				depthMin = (depthMax + depthMin) / 2;
			}
			if (danger >= 0 && danger < dangerLevel) {
				cout << "\nПриблизительная глубина безопасной кладки " << (depthMax + depthMin) / 2 << " метра.";
			}
		}
	}
   
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создаcть файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
