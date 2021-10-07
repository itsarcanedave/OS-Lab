#include <iostream>
#include <sys/types.h>
#include <unistd.h>
using namespace std;

void forkexample() {
	// child process because return value zero
	if (fork() == 0)
	cout<< "Hello from Child!\n";

	// parent process because return value non-zero.
	else
	cout << "Hello from Parent!\n";
	}

int main() {
	forkexample();
	return 0;
}
