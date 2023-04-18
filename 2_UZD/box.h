#ifndef BOX_H
#define BOX_H
#include <cstring>


using namespace std;

class Box	   									
{
public:					
   	Box(string, string, string);	
  	void SetBox(string, string, string);	
	string Getwidth();
	string Getheight();
	string Getborder_color();										
	void PrintBox();
		

protected:													
	string width;
	string height;
	string border_color;
};



#endif
