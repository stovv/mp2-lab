//
// Created by Данила on 06.02.18.
//

#include "Postfix.h"
bool Postfix::operand(const char str) {
    if((str>=65) && (str<=90)){
        return true;
    }else if(((str>=40)&&(str<=43))||(str == 45)||(str == 47) || (str == 61)){
        return false;
    }
    throw "wrong operation " + str;
}

int Postfix::get_priority(char x) {
    if ((x =='*')||(x =='/')){
        return 2;
    }
    if ((x =='+')||(x =='-')){
        return 1;
    }
    if ((x =='(')||(x ==')')){
        return 0;
    }
	return -1;
}

std::string Postfix::gen_form(std::string inp_text){

	Stack<char> Stack_one;
	Stack<char> Stack_two;
	for (int i = 0; i < inp_text.length(); i++) {
		if (inp_text[i] == '(') Stack_two.push(inp_text[i]);
		else if ((inp_text[i] == '+') || (inp_text[i] == '-') || (inp_text[i] == '/') || (inp_text[i] == '*')) {
			char stack_two_up = Stack_two.pop();
			while ((!Stack_two.empty()) && (Postfix::get_priority(stack_two_up) > Postfix::get_priority(inp_text[i]))) {
				Stack_one.push(stack_two_up);
				stack_two_up = Stack_two.pop();
			}
			if(stack_two_up!='\0') Stack_two.push(stack_two_up);
			Stack_two.push(inp_text[i]);
		}
		else if (inp_text[i] == ')') {
			char stack_two_up = Stack_two.pop();
			while ((Stack_two.empty()) && (stack_two_up != '(')); {
				Stack_one.push(stack_two_up);
			}
			Stack_two.pop();
		}
		else { Stack_one.push(inp_text[i]); }
	}

	while (!Stack_two.empty()) { Stack_one.push(Stack_two.pop()); }
	std::string s = "";
	while (!Stack_one.empty()) { s = Stack_one.pop() + s; }
	
	return s;
}

double Postfix::calc_form(std::string form)
{
	Stack<double> double_list;
	for (size_t i = form.size()-1; i < form.size(); i--) {
		if (Postfix::operand(form[i])) {
			std::cout << "input var " << form[i] << " : ";
			double var;
			std::cin >> var;
			double_list.push(var);
		}

	}
	Stack<double> end_list;
	for (int i = 0; i < form.size(); i++) {
		char element = form[i];
		if (Postfix::operand(element)) {
			end_list.push(double_list.pop());
		}
		else {
			double two = end_list.pop();
			double one = end_list.pop();
			end_list.push(calc_op(one, two, element));
		}
	}
	return end_list.pop();
}

double Postfix::calc_op(double one, double two, char op){
		switch (op) {
		case '+':
			return (one + two);
		case '-':
			return (one - two);
		case '*':
			return (one * two);
		case '/':
			return (one / two);
		default:
			return -1;
		}
}




