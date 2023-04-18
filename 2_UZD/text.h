#ifndef TEXT_H
#define TEXT_H
#include <cstring>


using namespace std;

class Text	   									
{
public:					
   	Text(string, string, string, string);	// konstruktors
  	void SetText(string, string, string, string);	// setteris
  	
  	// Get funkcijas
  	
	string Getfont();	
	string Getsize();
	string Getcolor();
	string Getdata();									
	void PrintText();   // Print funkcija
		

protected:													
	string font;
	string size;
	string color;
	string data;
};

#endif
