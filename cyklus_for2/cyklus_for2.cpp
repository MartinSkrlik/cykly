// cyklus for zakladny
#include <iostream>
int main()
{

	using namespace std;

	int cislo; 
	int cislovka = 0;
	cout << "Zadaj cele cislo: ";
	cin >> cislo;
	for (; cislo != 0;)
	{
		cislovka += cislo;
		cout << cislovka << endl;
		cout << "skusaj dalej\n";
		cin >> cislo;
	}


	
	cout << "Zadal si 0, takze koncis fesak " << endl;

		return 0;


}


