#include <iostream>
#include <string>
#include "Postfix.h"

using namespace std;


int main() {
	string inp_text;
	cout << "Input expression: ";
	cin >> inp_text;

	string form = Postfix::gen_form(inp_text);
	cout << "form is " << form << endl;
	double calc_form = Postfix::calc_form(form);
	cout << calc_form << endl;
	system("pause");
	return 0;
}
//mv2practics wiki