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
	rating =0;
	cout<<"Please input your rating"<<endl;
	cin >>rating;
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
	cout<<"deleting "<<rating<<", "<<comments<<endl;


}

void SNode::printNode(){
	cout<<"Rating: "<<rating<<", Comments: "<<comments<<endl;
}

