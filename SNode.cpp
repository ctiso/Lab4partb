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
	cout<<"Please input your rating"<<endl;
	cin >>rating;
	cout<<"Please input your comments"<<endl;
	cin >>comments;
}
SNode::SNode(int r, string c){
	rating=r;
	comments=c;
}

/*SNode::~SNode(){
	delete SNode();
}
*/
void SNode::printNode(){
	cout<<rating<<","<<comments<<endl;
}

