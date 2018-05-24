#ifndef UNIT_H
#define UNIT_H
#include <iostream>
template <typename L>
class Unit {
public:
	Unit() :next(NULL) {};
	Unit(const L& value) :next(NULL), val(value) {};
	Unit(const L& value, Unit* next) : next(next), val(value) {};
	Unit* next;
	L val;
};
#endif // !UNIT_H

