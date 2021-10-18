#include <iostream>
using namespace std;

// Function to find length of a string
int stringLen(string str)
{
    int p = 0;
    while (str[p] != '\0')
    {
        p++;
    }
    return p;
}

// Function to concatenate two strings
void stringCat(string str1, string str2)
{
    string str3 = str1 + str2;
    cout << str3 << endl;
}

// Function to reverse a string
void stringRev(string str)
{
    int length = 0, n;
    char temp;
    length = stringLen(str);
    n = length - 1;

    for(int p = 0; p <= length/2; p++)
    {
        temp = str[p];
        str[p] = str[n];
        str[n] = temp;
        n--;
    }

    cout<<"Reverse of string: "<<str<<endl;
}

// Function to copy second string into the first
void stringCopy(string &str1, string str2)
{
    str1 = str2;   
}

int main()
{
    string str1 = "Alexa", str2 = "happy";
    string str;
        
    stringCopy(str, str1);

    int length = stringLen(str);
    cout<<"Length of "<<str<<" is: "<<length<<endl;
    
    stringRev(str);

    cout<<"Concatenation of string1 and string2 is: ";
    stringCat(str1, str2);

    return 0;
}

