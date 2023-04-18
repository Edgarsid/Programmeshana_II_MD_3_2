#include <iostream>
#include <cstring>
#include "box.h"



using namespace std;


Box::Box(string w, string h, string b_c) 	// kontruktors							
{
	width = w;
	height = h;
	border_color = b_c;
}

void Box::SetBox(string w, string h, string b_c) 	  // setteris
{
	width = w;
	height = h;
	border_color = b_c;
}

// Get funkcijas

string Box::Getwidth()
{
	return width;
}

string Box::Getheight()
{
	return height;
}

string Box::Getborder_color()
{
	return border_color;
}

void Box::PrintBox()  // print funkcija	
{
	cout << "Width: " << width << ", height: " << height << ", border color: " << border_color  << endl;	
}
