/*
File Matrix.hpp
*/
#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>
#include <string>
using namespace std;
class Matrix{
	public:
		Matrix(int rows, int cols);
		Matrix(const Matrix &m);
		Matrix();
		~Matrix(void);
//	private:
		int rows, cols;
		double **data;
	public:
		friend bool isEvenNumber(const int &number);
		friend bool isNegativeNumber(const float &number);
		double highestValue();
		friend bool isMatrixSizeEqual(const Matrix &m, const Matrix &n);
		friend bool isColsMatrix1EqualMatrix2(const Matrix &m, const Matrix &n);
		friend bool isMatrixSquare(const Matrix &m);
		void setData(double number);
		void setData(std::string inputData);
		void setDataRandomNumbers();
		double &operator()(int row, int col);
		Matrix &operator=(const Matrix &m);
		Matrix &operator+=(const Matrix &m);
		Matrix operator+(const Matrix &m);
		Matrix &operator-=(const Matrix &m);
		Matrix operator-(const Matrix &m);
		Matrix transpose();
		void printSize();
		void print();
		//Friend functions
		friend ostream &operator<<(ostream &out, const Matrix &m);
		friend Matrix operator*(const Matrix &m, const Matrix &n);
		friend Matrix operator*(double, const Matrix &m);
		friend Matrix operator*(const Matrix &m, double);
		friend Matrix operator^(const Matrix &m, long);
		friend double determinant(const Matrix &m);
		friend int getNumberOfRow(const Matrix &m);
		friend int getNumberOfColumns(const Matrix &m);
		friend Matrix removeRow(const Matrix &m, long number);
		friend Matrix removeColumn(const Matrix &m, long number);
	protected:
		void allocateArrays();
		void removeWhiteCharacters(string &str);

};
#endif // MATRIX_HPP