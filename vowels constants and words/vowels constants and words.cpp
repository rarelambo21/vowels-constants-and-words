// vowels constants and words.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string str;

    int vowels = 0, constants = 0, words = 1;

    str = "how Many wOrds";

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            words++;
        else {
            switch (str[i]){
            case 'A':
                vowels++;
                break;
            case 'a':
                vowels++;
                break;
            case 'E':
                vowels++;
                break;
            case 'e':
                vowels++;
                break;
            case 'I':
                vowels++;
                break;
            case 'i':
                vowels++;
                break;
            case 'O':
                vowels++;
                break;
            case 'o':
                vowels++;
                break;
            case 'U':
                vowels++;
                break;
            case 'u':
                vowels++;
                break;
            default:
                constants++;
                break;
            }
        }
    }
    std::cout << "Words: " << words << std::endl;
    std::cout << "Vowels: " << vowels << std::endl;
    std::cout << "Constants: " << constants << std::endl;

    return 0;
}


