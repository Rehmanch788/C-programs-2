#include <iostream>
#include<ctype.h>
using namespace std;
int main()
{
       char letter;
       int result;
       cout << "Enter any letter ::";
       cin >> letter;
       result =islower(letter);
       cout << result<<endl;
       return 0;

}
