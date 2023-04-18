#include <iostream>
#include <string>
#include "box.h"
#include "text.h"
#include "textbox.h"


using namespace std;

int main()
{
	
	TextBox C ("Arial", "18", "Red", "TXT", "5", "8", "Blue"); // Atvasinatas klases parametri
	C.PrintTextBox();
	
	// get funkciju demonstraacija
	cout << C.Getfont() << endl;
	cout << C.Getsize() << endl;
	cout << C.Getcolor() << endl;
	cout << C.Getdata() << endl;
	cout << C.Getwidth() << endl;
	cout << C.Getheight() << endl;
	cout << C.Getborder_color() << endl;
	
	system("pause");
	return 0;
}
