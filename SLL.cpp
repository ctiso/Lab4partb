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
#include "SNode.hpp"
SLL::SLL(){
	first=NULL;
	last=NULL;
	size=0;
}
void SLL::printSLL(){
	SNode *tmp=first;
	while(tmp !=NULL){
		cout<<tmp->rating<<","<<tmp->comments<<":";
		tmp=tmp->next;
	}
	cout<<""<<endl;
}
void SLL::push(int r, string c){
	SNode *n=new SNode(r,c);
	last->next=n;
	n->next=NULL;
	last=n;
	size++;
}
void SLL::addAtFront(int r,string c){
	SNode *n=new SNode(r,c);
	n->next=first;
	first=n;
	size++;
}
void SLL::addFirst(int r, string c){
	SNode *n=new SNode(r,c);
	first=n;
	last=n;
	size=1;
	n->next=NULL;
}
int SLL::pop(){
	SNode *n=last;
	last=first;
	while(last->next !=n){
		last=last->next;
	}
	last->next=NULL;
	int rate=n->rating;
	delete n;
	return rate;
}
