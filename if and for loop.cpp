#include <iostream>
using namespace std;
int main()
 {
    // Print even numbers between 0 and 10
    for (int i = 0; i <= 10; i++) 
	{
        if (i % 2 == 0) {
            cout << i << " is even" << endl; // print the even
        } else  // condition structure
		{
            cout << i << " is odd" << endl;   //print odd
        }
    }
    return 0;
}

