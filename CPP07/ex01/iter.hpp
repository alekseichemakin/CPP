//
// Created by lexa on 24.09.2021.
//

#ifndef _CPP07_ITER_HPP
#define _CPP07_ITER_HPP

template<typename T>

void iter(T *arr, int n, void (*f)(T const&)){
	if (n <= 0)
		return;
	for (int i = 0; i < n; ++i) {
		f(arr[i]);
	}
}

#endif //_CPP07_ITER_HPP
