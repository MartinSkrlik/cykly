// textin4.cpp -- ètení znakù pomocí cin.get()
#include <iostream>
int main()
{
	using namespace std;

	int m, j, vysledok = 0;

	cout << "zadaj celeggdfg do programu";
	cin >> m;
	cout << "zadaj druhe cele cislo do programu";
	cin >> j;

	for (m; m <= 9; m++)
	{
		vysledok += m;

	}
	cout << "sucet vsetkych celych cisel medzi 5 a 9 je " << vysledok << endl;
	return 0;
}
