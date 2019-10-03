/*
 * book.cpp
 *
 *  Created on: Sep 21, 2019
 *      Author: Christopher
 */


#include "book.hpp"
#include<iostream>
using namespace std;
#include <string>

Book::Book(std::string first,std::string last,std::string book,int num){
	authorFirst=first;
	authorLast=last;
	bookName=book;
	year=num;
	for(int i=0;i<10;i++){
		ratings[i]=0;
	}
}
Book::Book(std::string first,std::string last,std::string book,int num,int* arr){
	authorFirst=first;
	authorLast=last;
	bookName=book;
	year=num;
	ratings=arr;

}
Book::Book(){
	authorFirst;
	authorLast;
	bookName;
	year;
	ratings;
}
Book::~Book(){
	cout<<"Book Deleted"<<endl;
}
double Book::AverageRate(){
	double sum=0;
	for(int i=0;i<10;i++){
		sum+=ratings[i];
	}
	return (sum/10);
}
void Book::PrintRate(){
	if(AverageRate()>0){
		cout<<AverageRate()<<endl;
	}
	else{
		cout<<"(no ratings yet)"<<endl;
	}
}
void Book::PrintInfo(){
	cout<<authorLast<<","<<authorFirst<<":"<<bookName<<","<<year<<","<<AverageRate()<<endl;
}

void Book::operator>(Book* arr){
	Book high=arr[0];
	for(int i=1;i<5;i++){
		if(arr[i].AverageRate()>high.AverageRate()){
			high=arr[i];
		}
	}
	high.PrintInfo();
}

