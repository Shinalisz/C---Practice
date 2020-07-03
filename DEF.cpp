// Can I open and run code from other files? Yes I can!
// Can I create and open a text file? Yes!
// Can I open an application?
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <shellapi.h>
#pragma comment(lib, "SHELL32.LIB") //pragma directive - allows us to 

using namespace std;

void HiThere()
{
    cout << "Please look at the following file on your screen.";          
}

void OpenFile()
{       
     ShellExecuteA(NULL, "open", "C:\\Users\\Kat\\Documents\\hifriend.txt", NULL, NULL, SW_SHOWNORMAL);
    
}
