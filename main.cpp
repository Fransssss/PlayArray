#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    string text[] = {"Apple", "Orange", "Mango"};
    int nums[] = {5, 4, 3, 2, 1};
    char option;
    int sizeStrArr = sizeof(text)/sizeof(text[0]);                  // determine the size of string array
    int sizeNumsArr = sizeof(nums)/sizeof(nums[0]);                    // determine teh size of int array

    cout << " let's play with array. shall we! " << endl;
    cout << "What type of items in array you'd like to see? [ 'N'/'n' - numbers || 'S'/'s' - string ]" << endl;
    cin >> option;

    if(option == 'S'|| option == 's')
    {
        int num = 0;
        cout << "Here is the input in string array " << endl;
        for(size_t i = 0; i < sizeStrArr; ++i)
        {
            ++num;
            cout << num << '.' << text[i] << endl;
        }
    } else if( option == 'N'|| option == 'n')
    {
        // do nums things
        int num = 0;
        cout << "Here is the input in int array " << endl;
        for(size_t i = 0; i < sizeNumsArr; ++i)
        {
            ++num;
            cout << num << ". [" << nums[i] << "] " << endl;
        }
    } else
    {
        cout << "Invalid input" << endl;
    }
    return 0;
}
