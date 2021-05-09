#include <iostream>
#include <string>
#include "defs.h"
#include "staff_functions.cpp"
using namespace std;


int main(int argc, const char * argv[])
{
    srand(time(0));
        
        int code = 0;
        menu Menu;
        Menu.echo_menu();
        cin >> code;
        Menu.memu(code);
        cout << '\n';
        while (code) {
            Menu.echo_menu();
            cin >> code;
            Menu.memu(code);
            cout << '\n';
        }
        return 0;

}
