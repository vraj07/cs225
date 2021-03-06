#ifndef _PSORT_H_
#define _PSORT_H_

#include <iostream>
#include <vector>
#include <omp.h>

using std::vector;

namespace ParallelSort{
	template <class T>
	void psort(vector<T>* array);

	template <class T>
	void psort(vector<T>* array, int left, int right);
}
#include "psort.cpp"
#endif
