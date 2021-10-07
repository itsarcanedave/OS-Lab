#include <iostream>
#include <sys/types.h>
#include <unistd.h>
using namespace std;

int main() {
	cout << "Hello\n";
	fork();
	cout << "Bye!\n";
	return 0;

}
