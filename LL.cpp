/*
 * LL.cpp
 *
 *  Created on: Sep 7, 2022
 *      Author: Nathan Saxe
 */

#include "LL.h"
#include <iostream>
using namespace std;
template<class Data>
LL<Data>::LL(){
	// TODO Auto-generated constructor stub
	fwdPtr = nullptr;
}
template<class Data>
void LL<Data>::push_front(Data data){
	LLnode * newNode = new LLnode;
	LLnode * temp = this->fwdPtr;
	newNode->theData = data;
	newNode->fwdPtr = temp;
	this->fwdPtr = newNode;
}
template<class Data>
void LL<Data>::push_back(Data data){
	LLnode* newNode = new LLnode;

	newNode->theData = data;

	newNode->fwdPtr = nullptr;

	if(this->fwdPtr == nullptr){
		this->fwdPtr = newNode;
	}
	else{
		LLnode *last = this->fwdPtr;
		while(last->fwdPtr!=nullptr){
			last = last->fwdPtr;
		}
		last->fwdPtr = newNode;
	}
}
template<class Data>
int LL<Data>::list_length(){
	int counter = 0;
	while(this->fwdPtr != nullptr){
		counter++;
		this->fwdPtr = this->fwdPtr->fwdPtr;
	}

	return counter;

}
template<class Data>
Student LL<Data>::retrieve_front(){
	if(this->fwdPtr == nullptr){
		throw 'A';
	}
	else{
		return this->fwdPtr->theData;
	}
}
template<class Data>
Student LL<Data>::retrieve_back(){
	while(this->fwdPtr->fwdPtr!=nullptr){
		this->fwdPtr = this->fwdPtr->fwdPtr;
	}
	return this->fwdPtr->theData;
}
template<class Data>
void LL<Data>::display_list(){
	int counter = 0;
	if(this->fwdPtr!=nullptr){
		while(this->fwdPtr != nullptr){
			counter++;
			cout << "node " << counter << " address -> " << this->fwdPtr << " Student Name:" << this->fwdPtr->theData.data << " Student ID: " << this->fwdPtr->theData.key << endl;
			this->fwdPtr = this->fwdPtr->fwdPtr;
		}
	}
	else{
		cout << "Empty List" << endl;
	}
}
