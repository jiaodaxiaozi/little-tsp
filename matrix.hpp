#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

template <class T>
class Matrix {
public:
	Matrix(int rows, int cols) : rows_{rows}, entries_(rows * cols) {}

	// operators for getting costs
	T operator()(int row, int col) const
	{ return entries_[row * rows_ + col]; }

	// set the entry
	void SetEntry(int row, int col, T value)
	{ entries_[row * rows_ + col] = value; }

private:
	int rows_;
	std::vector<T> entries_;
};

#endif // MATRIX_H