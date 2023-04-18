#ifndef TEXTBOX_H
#define TEXTBOX_H
#include <cstring>

#include "box.h"
#include "text.h"

using namespace std;

class TextBox : public Text, public Box	  // atvasinajums no 2 klaseem
{
public:
	TextBox(string, string, string, string, string, string, string);       // konstruktors
	void SetTextBox(string, string, string, string, string, string, string);  // setteris
	void PrintTextBox();
};





#endif
