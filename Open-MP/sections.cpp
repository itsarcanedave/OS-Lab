#include <cstdio>
#include <omp.h>

using namespace std;

int main() {
	#pragma omp parallel num_threads(3)
	{
	printf("%d We all do this first\n", omp_get_thread_num());
	#pragma omp sections
	{
		{
			printf("%d This runs once\n", omp_get_thread_num());
		}
	#pragma omp section
		{
		printf("%d This runs afterwards\n", omp_get_thread_num());
		printf("%d So does this one\n", omp_get_thread_num());
		}
	#pragma omp section
		{
		printf("%d And finally it did this\n", omp_get_thread_num());
		}
	}
	
	printf("%d And we're out of the sections!\n", omp_get_thread_num());
	}

	return 0;
}
