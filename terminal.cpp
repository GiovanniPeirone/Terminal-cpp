#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
   
    while (true) {


        char buffer[MAX_PATH];

        if (GetCurrentDirectoryA(MAX_PATH, buffer)){
            cout << "f" << buffer << ">"; 
        }

        else {
            cout << "error" << endl;
        }
       

        char *Command;

        cin >> Command;

        system(Command);

    }
    
}

