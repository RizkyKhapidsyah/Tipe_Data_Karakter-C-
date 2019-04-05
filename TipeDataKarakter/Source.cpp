/* Copyright (C) 2019 by Rizky Khapidsyah */

#include <cstdlib>
#include <iostream>

using namespace std;

int i;

void Garis(
	char *Param1, char *Param2,
	int JkParam1, int JkParam2)
{
	for (i = 0; i <= JkParam1; i++)
	{
		cout << "%s" << Param1;
	}
		for (i = 0; i <= JkParam2; i++)
		{
			cout << "%s" << Param2;
		}
}

int main()
{
	cout << "Memori dari tipe data char           : " << sizeof(char); cout << "\n";
	cout << "Memori dari tipe data unsigned char  : " << sizeof(unsigned char); cout << "\n";
	cout << "Memori dari tipe data signed char    : " << sizeof(signed char); cout << "\n\n";


	system("PAUSE");
	return EXIT_SUCCESS;
}
