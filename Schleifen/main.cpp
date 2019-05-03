#include <iostream>

using namespace std;

int main()
{
	cout << "Programm zu Schleifen" << endl;

	// for-Schleife
	for (int i=0;i<5;i++)
	{
		cout << i << endl;
	}

	
	// while-Schleife
	// um sich die do-while zu sparen, einfach die pruefung so init, dass die bedingung true ist
	char Benutzereingabe = 'j';

	//cout << "Wollen Sie die Schleife sehen? [j,n]: ";
	//cin >> Benutzereingabe;
	
	while (Benutzereingabe == 'j')
	{
		cout << "while-Schleife" << endl;

		cout << "Wollen Sie die Schleife nochmal sehen? [j,n]: ";
		cin >> Benutzereingabe;
	}


	int j = 1;
	while (j <= 10)
	{
		cout << "Zahl: " << j << endl;
		j++;
	}


	// do-while Schleife
	do
	{
		cout << "Das ist eine do-while-Schleife" << endl;
		cout << "Wollen Sie die do-while-Schleife nochmal sehen?[j,n]: ";
		cin >> Benutzereingabe;
	}
	while (Benutzereingabe == 'j');


	system("pause");
	return 0;
}