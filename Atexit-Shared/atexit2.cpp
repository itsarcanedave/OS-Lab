#include <iostream>
#include <stdlib.h>
using namespace std;

void exitfunc() {
	cout << "Called cleanup function - exitfunc()\n";
	return;
}

int main() {
	atexit(exitfunc);
	cout << "Hello, World!\n";
	exit(0);
}
