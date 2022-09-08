/*
 * LL.h
 *
 *  Created on: Sep 7, 2022
 *      Author: Nathan Saxe
 */

#ifndef LL_H_
#define LL_H_

#include "Student.hpp"

struct LLnode{

	LLnode * fwdPtr;

	Student theData;
};
template<class Data>
class LL {
private:
	LLnode * fwdPtr;
public:
	LL();
	void push_front(Data);
	void push_back(Data);
	int list_length();
	Student retrieve_front();
	Student retrieve_back();
	void display_list();
	void destroy_list();
	Data search_list(int);
	bool delete_node(int);
};

#endif /* LL_H_ */
