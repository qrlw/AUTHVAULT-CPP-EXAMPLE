#include <iostream>
#include <string>
#include <cstdlib>
#include <filesystem>
#include <Windows.h> 
#include "authvault.h"
#include "encrypt.h"


using namespace AuthVault;

const int APPLICATION_ID = 37; // Your application ID
const std::string SECRET = XorStr("1ef87b0a176f4d62fd9bb8a8"); // Your secret






int main() {

    AuthVault::setup();
    std::string license_key;



    SetConsoleTitle(L"AuthVault Beta - 0.0.1");




    std::cout << XorStr("Enter your license key: ");
    std::cin >> license_key;
    system("cls");

    int validation_status = validate_license_key(license_key, APPLICATION_ID, SECRET);


    if (validation_status == 0) {
        std::cout << XorStr("valid key");
        //valid key (continue the program)    

    }

    std::cout << XorStr("This is your program!");

    Sleep(2500);




    return 0;
}


