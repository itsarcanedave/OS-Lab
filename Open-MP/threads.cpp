#include <iostream>

using namespace std;

int main() {
	#pragma omp parallel num_threads(3)
	{
	cout << "Hello world!\n";
	}	

	return 0;
}
