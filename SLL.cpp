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
#include "SNode.hpp"
SLL::SLL(){
	first=NULL;
	last=NULL;
	size=0;
}
SLL::~SLL(){
	cout<<"deleted each node in 11"<<endl;
}
void SLL::printSLL(){
	cout<<"\n";
	SNode *tmp=first;
	while(tmp->next !=NULL){
		tmp->printNode();
		tmp=tmp->next;
	}
	tmp->printNode();
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
	size++;
}
int SLL::pop(){
	cout<<"removing "<<last->rating<<", "<<last->comments<<endl;
	SNode *n=last;
	last=first;
	while(last->next !=n){
		last=last->next;
	}
	last->next=NULL;
	int rate=n->rating;
	delete n;
	size--;
	return rate;
}
double SLL::getAve(){
	double sum=0;
	SNode *n=first;
	while(n->next!=NULL){
		sum+=n->rating;
		n=n->next;
	}
	sum+=n->rating;
	return sum/10.0;
}
void SLL::insertInOrder(int r,string c){
	bool temp=true;
	if(size==0){
		addFirst(r,c);
	}
	else if(r<first->rating){
		addAtFront(r,c);
	}
	else if(r>last->rating){
		push(r,c);
	}
	else{
		SNode *n=first;
		if(r<n->next->rating){
			temp=false;
		}
		while(temp){
			n=n->next;
			if(r<n->next->rating){
				temp=false;
			}
		}
		SNode *x=new SNode(r,c);
		x->next=n->next;
		n->next=x;
	}
}
