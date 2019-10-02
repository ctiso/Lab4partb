/*
 * SNode.cpp
 *
 *  Created on: Sep 22, 2019
 *      Author: Christopher
 */

#include<iostream>
using namespace std;
#include <string>
#include "SNode.hpp"



SNode::SNode(){
	int x;
	cout<<"Please input your rating"<<endl;
	cin >>x;
	rating=x;
	cout<<"Please input your comments"<<endl;
	cin >>comments;
	next=NULL;
}
SNode::SNode(int r, string c){
	rating=r;
	comments=c;
	next=NULL;
}

SNode::~SNode(){
	if(next != NULL){
		cout<<"Deleting could cause a hole"<<endl;
	}
	delete next;
}

void SNode::printNode(){
	cout<<rating<<","<<comments<<endl;
}

