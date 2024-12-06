#include <iostream>
#include <iomanip>
#include <bitset>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int16_t x;
	cout << "Введите x: ";
	cin >> x;
	cout << "       Дес | Шест | Восьм | Двоич" << endl;
	cout << "Исходное: " << x << " | " << hex << x << " | " << oct << x << " | " << dec << bitset<16>(x) << endl; //Выводим исходное число
	bool pos_sign = (x >= 0); //Переменная для хранения знака
	uint16_t xabs = abs(x) | ((x >> 15) << 15); //Переменная для хранения модуля
	cout << "Прямой код: " << xabs << " | " << hex << xabs << " | " << oct << xabs << " | " << dec << bitset<16>(xabs) << endl;
	xabs = (~xabs) | ((x >> 15) << 15); // Обратный код
	cout << "Обратный код: " << xabs << " | " << hex << xabs << " | " << oct << xabs << " | " << dec << bitset<16>(xabs) << endl;
	(xabs++) | ((x >> 15) << 15); //Доп. код
	cout << "Дополнительный код: " << xabs << " | " << hex << xabs << " | " << oct << xabs << " | " << dec << bitset<16>(xabs) << endl;
	return 0;
}
