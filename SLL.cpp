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
	for(int i=0;i<size;i++){
		SNode *temp=first;
		first=temp->next;
		delete temp;
		size--;
	}
	size=0;
	first=NULL;
	last=NULL;
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
	size--;
}
double SLL::getAve(){
	double sum=0;
	SNode *n=first;
	double count=0;
	for(int i=0;i<size;i++){
		sum+=n->rating;
		count++;
		n=n->next;
	}
	return sum/count;
}
void SLL::insertInOrder(int r,string c){
	if(size==0){
		addFirst(r,c);
		cout<<"4"<<endl;

	}
	if(first->rating > r){
		addAtFront(r,c);
		cout<<"5"<<endl;
	}
	if(r >last->rating){
		push(r,c);
	}
	else{
		SNode *n= new SNode(r,c);
		SNode *tmp=first;
		while(tmp->rating< n->rating){
			tmp=tmp->next;
		}
		n->next=tmp->next->next;
		tmp->next=n;
		size++;
	}
}
