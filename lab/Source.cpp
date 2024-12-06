#include <iostream>
#include <iomanip>
#include <bitset>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int16_t x;
	cout << "Ââåäèòå x: ";
	cin >> x;
	cout << "       Äåñ | Øåñò | Âîñüì | Äâîè÷" << endl;
	cout << "Èñõîäíîå: " << x << " | " << hex << x << " | " << oct << x << " | " << dec << bitset<16>(x) << endl; //Âûâîäèì èñõîäíîå ÷èñëî
	bool pos_sign = (x >= 0); //Ïåðåìåííàÿ äëÿ õðàíåíèÿ çíàêà
	uint16_t xabs = abs(x) | ((x >> 15) << 15); //Ïåðåìåííàÿ äëÿ õðàíåíèÿ ìîäóëÿ
	cout << "Ïðÿìîé êîä: " << xabs << " | " << hex << xabs << " | " << oct << xabs << " | " << dec << bitset<16>(xabs) << endl;
	xabs = (~xabs) | ((x >> 15) << 15); // Îáðàòíûé êîä
	cout << "Îáðàòíûé êîä: " << xabs << " | " << hex << xabs << " | " << oct << xabs << " | " << dec << bitset<16>(xabs) << endl;
	(xabs++) | ((x >> 15) << 15); //Äîï. êîä
	
	return 0;
}
