                                    
                                        /* A program to ask the user to enter His/Her  first name and Last name Then print it on screen */

#include <iostream>
using namespace std;
                          
int main()
            
{
     
    string first_name;
    cout << "Please Enter Your First Name ! " << endl;
    cin >> first_name;


    string Last_name;
    cout << "Please Enter Your Last Name ! " << endl;
    cin >> Last_name;

    // output

    cout << "your full name is : "  << first_name + " " + Last_name << endl;

 
    return 0;

    // created by @ilyes_trabelsi
}

