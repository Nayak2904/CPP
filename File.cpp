#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream MyFile("myFile.txt");
    MyFile << "Hello and welcome to our new file";
    MyFile.close();

    string myText;

    ifstream MyReadfile("myFile.txt");
    while (getline (MyReadfile,myText)) 
    {
        cout << myText ;
    }
    MyReadfile.close();
    
    return 0;
}