#include <iostream>
#include <cstring>
#include "textbox.h"

using namespace std;


// konstruktors
TextBox::TextBox(string f, string s, string c, string d, string w, string h, string b_c):
	 	Text (f, s, c, d), Box(w, h, b_c)							
{

}

//setteris
void TextBox::SetTextBox(string f, string s, string c, string d, string w, string h, string b_c)	
{
	font = f;
	size = s;
	color = c;
	data = d;
	width = w;
	height = h;
	border_color = b_c;	
}

// Ievietotas baazes klashu print funkcijas
void TextBox::PrintTextBox()	
{
	PrintText();
	PrintBox();
}
