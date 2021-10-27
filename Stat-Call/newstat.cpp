/*
Using the stat system call
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

using namespace std;
const int N_BITS = 3;

int main(int argc, char *argv[ ]){
unsigned int mask = 0700;
struct stat buff;
char perm[8][4];

strcpy(perm[0],"---");
strcpy(perm[1],"--x");
strcpy(perm[2],"-w-");
strcpy(perm[3],"-wx");
strcpy(perm[4],"r--");
strcpy(perm[5],"r-x");
strcpy(perm[6],"rw-");
strcpy(perm[7],"rwx");

if (argc > 1) {
	if ((stat(argv[1], &buff) != -1)) {
	cout << "Permissions for " << argv[1] << " ";
	for (int i=3; i;--i) {
		cout << perm[(buff.st_mode & mask) >> (i-1)*N_BITS];
		mask >>= N_BITS;
	} // endwhile
	cout << endl;
	} else {
		perror(argv[1]);
		return 1;
		}
	} else {
		cerr << "Usage: " << argv[0] << " file_name\n";
		return 2;
	}
	return 0;
}
