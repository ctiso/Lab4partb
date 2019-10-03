/*
 * book.hpp
 *
 *  Created on: Sep 21, 2019
 *      Author: Christopher
 */

#ifndef BOOK_HPP_
#define BOOK_HPP_
#include <string>

class Book{
	std::string authorFirst;
	std::string authorLast;
	int* ratings = new int[10];
	std::string bookName;
	int year;
public:
	Book(std::string first,std::string last,std::string book,int num);
	Book(std::string first,std::string last,std::string book,int num,int* arr);
	~Book();
	Book();
	double AverageRate();
	void PrintRate();
	void PrintInfo();
	void operator>(Book* arr);
};


#endif /* BOOK_HPP_ */
