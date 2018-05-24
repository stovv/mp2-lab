//
// Created by Данила on 06.02.18.
//

#ifndef LIST_H
#define LIST_H

#include "Unit.h"
#include <iostream>

template <typename L>
class List {
private:
	Unit<L>* root;
public:
	List();
	List(const List<L>& list);
	~List();
	void push_back(const L &l);
	void push_up(const L &l);
	void push_under(L key, const L &l);
	L pop_up();
	L pop_back();
	size_t get_size()const;
	List<L>& operator=(const List<L>& list);
};


template <typename L>
List< L >::List() : root(NULL) {}

template<typename L>
List<L>::List(const List<L>& list):root(NULL){
	if (list.root) {
		root = new Unit<L>(list.root->val);
		Unit<L>* buf = root;
		Unit<L>* buffer = list.root->next;
		while (buffer) {
			buf->next = new Unit<L>(buffer->val);
			buf = buf->next;
			buffer = buffer->next;
		}
	}
}

template<typename L>
List<L>::~List() {
	while (root) {
		pop_up();
	}
}

template<typename L>
void List<L>::push_back(const L & l) {
	Unit<L>* temp = NULL;
	if (temp = new Unit<L>(l)) {
		if (root == NULL) {
			root = temp;
		}
		else {
			Unit<L>* buf = root;
			while (buf->next) {
				buf->next;
			}
			buf->next = temp;
		}
	}
	else {
		throw "ERROR List is FULL";
	}
}
template<typename L>
void List<L>::push_up(const L & l) {
	Unit<L>* unit = NULL;
	if (unit = new Unit<L>(l)) {
		Unit<L>* buf = root;
		root = unit;
		unit->next = buf;
	}
	else {
		throw "ERROR List is FULL";
	}

}

template<typename L>
void List<L>::push_under(L key, const L & l) {
	Unit<L>* unit = NULL;
	if (unit = new Unit<L>(l)) {
		if (!root->next) {
			root->next = unit;
		}
		else {
			Unit<L>* buf = root;
			while (buf->val != key) {
				buf = buf->next;
			}
			Unit<L>* temp = buf->next;
			buf->next = unit;
			buf->next->next = temp;
		}
	}
	else {
		throw "ERROR List is FULL";
	}

}

template<typename L>
L List<L>::pop_up() {
	if (!root) { throw "List is Empty"; }
	Unit<L>* buf = root;
	L dat = buf->val;
	root = buf->next;
	delete buf;
	return dat;
}

template<typename L>
L List<L>::pop_back() {

	if (!root) { throw "List is Empty"; }
	else if (!root->next) {
		L val = root->val;
		delete root;
		root = NULL;
		return val;
	}
	else {
		Unit<L>* buf = root;
		while (buf->next->next) {
			buf = buf->next;
		}
		L val = buf->next->val;
		Unit<L>* temp = buf->next;
		buf->next = NULL;
		delete temp;
		return val;
	}
	return L();
}

template<typename L>
inline size_t List<L>::get_size() const{
	size_t size = 0;
	Unit<L>* root_buf = root;
	while (root_buf) {
		root_buf = root_buf->next;
		size++;
	}
	return size;
}

template<typename L>
List<L>& List<L>::operator=(const List<L>& list){
	if (list.root) {
		root = new Unit<L>(list.root->val);
		Unit<L>* buf = root;
		Unit<L>* buffer = list.root->next;
		while (buffer) {
			buf->next = new Unit<L>(buffer->val);
			buf = buf->next;
			buffer = buffer->next;
		}
	}
	return *this;
}




#endif //LIST_H