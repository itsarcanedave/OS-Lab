#include <iostream>
#include <omp.h>

using namespace std;

int main() {
	int id, data, total;
	#pragma omp parallel private(id, data, total)
	{
	id = omp_get_thread_num();
	data = id;
	total = omp_get_num_threads();
	cout << "Hello, this is process " << id << " with data " << data << " and we have ";
	cout << total << " threads in total.\n";
	}
	cout << "Parallel ends here.\n";
	return 0;
}
