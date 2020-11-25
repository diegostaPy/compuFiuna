#include <iostream>
int x, y; // variables globales
int main() {
	int x; // definición de variable local x
	x = 1; // acceso a la variable local x
	y = 1; // acceso a la variable global y
	{
		int y = 20; // variable de bloque (local)
		y = 5; // acceso a variable de bloque (local) y
	}
	return 0;
}
