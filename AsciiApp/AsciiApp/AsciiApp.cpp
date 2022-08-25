//Gives a list of Ascii codes for the string given
#include <iostream>

int main()
{
 
    std::string word;
    std::cout << "Please, type a word: " << std::endl;
    std::cin >> word;
    for (char& c : word) 
    {
        std::cout << int(c) << std::endl;
    }



    system("pause>0");
}

