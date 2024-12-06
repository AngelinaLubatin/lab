#include <iostream>
#include <iomanip>
#include <bitset>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int16_t x;
	cout << "������� x: ";
	cin >> x;
	cout << "       ��� | ���� | ����� | �����" << endl;
	cout << "��������: " << x << " | " << hex << x << " | " << oct << x << " | " << dec << bitset<16>(x) << endl; //������� �������� �����
	bool pos_sign = (x >= 0); //���������� ��� �������� �����
	uint16_t xabs = abs(x) | ((x >> 15) << 15); //���������� ��� �������� ������
	cout << "������ ���: " << xabs << " | " << hex << xabs << " | " << oct << xabs << " | " << dec << bitset<16>(xabs) << endl;
	xabs = (~xabs) | ((x >> 15) << 15); // �������� ���
	cout << "�������� ���: " << xabs << " | " << hex << xabs << " | " << oct << xabs << " | " << dec << bitset<16>(xabs) << endl;
	(xabs++) | ((x >> 15) << 15); //���. ���
	cout << "�������������� ���: " << xabs << " | " << hex << xabs << " | " << oct << xabs << " | " << dec << bitset<16>(xabs) << endl;
	return 0;
}
