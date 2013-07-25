// PiSpammer.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Windows.h"

typedef const char* string;

void pause();

int _tmain(int argc, _TCHAR* argv[])
{
	string hola = "dfgdfg\n";
	printf(hola);
	pause();
	return 0;
}

void pause()
{
	system("pause>nil");
}
