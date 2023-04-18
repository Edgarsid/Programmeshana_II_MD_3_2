#include <iostream>
#include <cstring>
#include "text.h"


using namespace std;


Text::Text(string f, string s, string c, string d) 	// kontruktors							
{
	font = f;
	size = s;
	color = c;
	data = d;
}

void Text::SetText(string f, string s, string c, string d)	// Setters
{
	font = f;
	size = s;
	color = c;
	data = d;	
}

// Zemaak Get funkcijas

string Text::Getfont()
{
	return font;
}

string Text::Getsize()
{
	return size;
}

string Text::Getcolor()
{
	return color;
}

string Text::Getdata()	
{
	return data;
}

void Text::PrintText()	// Print funkcija
{
	cout << "Font: " << font << ", size: " << size << ", color: " << color << ", data: " << data << endl;	
}

