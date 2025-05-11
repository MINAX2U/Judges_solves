#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    getline(cin, str);
    cout << str << endl;
    for(size_t i=0, len=str.length(); i != len; i++){
        cout << "~";
    }
    return EXIT_SUCCESS;
}
/* size_t : unsigned int 
    str.length() : lenght of string
*/