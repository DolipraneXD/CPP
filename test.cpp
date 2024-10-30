#include <iostream>
#include <fstream>

// class myclas
// {
// 	public:
// 		int add(int a, int b)
// 		{
// 			return(a * b + 1337);
// 		}
// 		int (myclas::*p)(int,int);
// 		myclas():p(NULL){}
// };

#include "./cpp01/ex05/Harl.hpp"

void Harl::debug() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    // Array of function pointers, mapped to the levels in the same order
    void (Harl::*funcPtrs[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*funcPtrs[i])();
            return;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
}


int main() {
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("INVALID");  // To test an unknown level

    return 0;
}

