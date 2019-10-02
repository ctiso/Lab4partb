/*
 * main.cpp
 *
 *  Created on: Sep 22, 2019
 *      Author: Christopher
 */


#include <iostream>
#include "SLL.hpp"
using namespace std;



int main() {
	cout<<"*************"<<endl;
	int r[10] = {9,8,4,5,11,10,3,6,8,2};
	string s[10] = {"really good!","loved it","mediocre", "okay, not great","best book ever!", "awesome!","boring","not bad","definitely worth reading", "terrible!"};
	SLL *list = new SLL();
	cout<<"*************"<<endl;

	for (int i = 0; i < 10; i++) {
		list->insertInOrder(r[i],s[i]);
		cout<<i<<endl;

		list->printSLL();
}
	cout<<"*************"<<endl;

	cout << "Ave: "<< list->getAve() << endl;
	cout << "Popping " << list->pop() << endl;
	list->printSLL();
	cout << "Popping " << list->pop() << endl;
	list->printSLL();
	delete list;
return 0;
}


