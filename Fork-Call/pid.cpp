#include <iostream>
#include <sys/types.h>
#include <unistd.h>
using namespace std;

int main() {
	cout << "\nInitial process \t PID " << getpid();
	cout << "\t PPID " << getppid();
	cout << "\t GID " << getpgid(0) << endl;
	for (int i = 0; i < 3; i++) {
		if (fork() == 0) {
		pid_t pid = getpid();
		cout << "New process \t PID " << getpid();
		cout << "\t PPID " << getppid();
		cout << "\t GID " << getpgid(0) << endl;
		}
	}
return 0;
}
