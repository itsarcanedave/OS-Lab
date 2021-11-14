#include <iostream>
#include <cstring>
#include <sys/types.h>
#include <unistd.h>
using namespace std;

int main() {

	static char buffer[10];
	if (fork( ) == 0) {  // In the child process
		strcpy(buffer, "CHILD...");
	} else { //In the parent process
		strcpy(buffer, "PARENT..");
	}

	for (int i=0; i < 3; ++i) { //Both process
		sleep(1);
		write(1, buffer, sizeof(buffer));
		}
		return 0;
	}
	
