#include "stdafx.h"
#include <stdio.h>
#include <omp.h>


int main(int  argc, char * argv[])
{
	int rank, size;
#pragma omp parallel num_threads(4)
{
	rank = omp_get_thread_num();
	size = omp_get_num_threads();
	printf("Hello world from process %d of %d\n", rank, size);
}
	return 0;
}
