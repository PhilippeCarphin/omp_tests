#include <stdio.h>
#include <omp.h>

int main(int argc, char **argv)
{
    int array[100];
#pragma omp prallel
    {
        int num_threads = omp_get_num_threads();
        int thread_num = omp_get_thread_num();
        for(int i = 0; i < 100; i++){
            array[i] = i*i;
        }
        fprintf(stderr, "Hello OpenMP: thread_num=%d (of %d)\n", thread_num, num_threads);
    }
    return 0;
}
