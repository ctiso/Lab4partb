/*
 * SLL.cpp
 *
 *  Created on: Sep 22, 2019
 *      Author: Christopher
 */

#include<iostream>
using namespace std;
#include <string>
#include "SLL.hpp"
#include "SNode.cpp"

SLL::SLL(){
	first=NULL;
	last=NULL;
	size=0;
}
void SLL::printSLL(){
	SNode *tmp=first;
	while(tmp !=NULL){
		cout<<tmp->printNode()<<endl;
		*tmp=*tmp->next;
	}
}
