// Can I open and run code from other files? Yes I can!
// Can I create and open a text file? Yes!
// Can I open an application?
// clean up header file! Header files should generally not contain function and variable definitions, 
    //so as not to violate the one definition rule.
#include <iostream>
#include <fstream>

#pragma once // this is a header guard. Stops this file from being copied into cpp files more than once


using namespace std;
namespace header
{
    class Player
    {
        public:
        const static int MAX_INPUT_LENGTH = 100;
        bool AnsweredAll;       
        char Name[MAX_INPUT_LENGTH], Profession[MAX_INPUT_LENGTH], Age[MAX_INPUT_LENGTH], Married[MAX_INPUT_LENGTH];
        string Questions[4] = {"What is your name?", "How old are you?", "What is your profession?", "Are you married? Y/N"};
    
        void AnsweringQuestions();
        void HiThere();
        void OpenFile();

    };       

}



