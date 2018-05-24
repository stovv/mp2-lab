//
// Created by Данила on 06.02.18.
//

#ifndef POSTFIX_H
#define POSTFIX_H

#include "Stack.h"
#include <string>
#include <iostream>

class Postfix {
private:
    static bool operand(const char str);
    static int get_priority(char x);
	static double calc_op(double one, double two, char op);
public:
	static std::string gen_form(std::string inp_text);
	static double calc_form(std::string form);
	

};
#endif //POSTFIX_POSTFIX_H
