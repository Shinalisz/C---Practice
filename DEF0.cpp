// Can I open and run code from other files? Yes I can!
// Can I create and open a text file? Yes!
// Can I open an application?
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <shellapi.h>

#pragma comment(lib, "SHELL32.LIB") //pragma directive - allows us to (research more!)

using namespace std;

void HiThere()
{   
    
    ofstream PlayerFile("playerfile.txt");

    //PlayerFile << "\nPersonal Details: \n" << player.Name << endl << player.Age << endl << player.Profession << endl << player.Married << endl;
    
    std::cout << "Please look at the following file on your screen.";          
}

void OpenFile()
{       
     ShellExecuteA(NULL, "open", "playerfile.txt", NULL, NULL, SW_SHOWNORMAL); // use filename if same directory, else give path: C:\\Users\\Kat\\Documents\\hifriend.txt
    
}