#include "Encryption.h"
#include <cstring>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
Encryption::Encryption()
{
    String= 0;
    String=new char[1];
    String[0]='\0';

}
Encryption::Encryption(char * s)
{
    String=new char[strlen(s)+1];
    strcpy(String,s);

}
void Encryption ::encryption(char * s)
{
     for (int i = 0; i <= strlen(s); i++)
    {
        // convert each char to
        // ASCII value
        int val = int(s[i]);

        // Convert ASCII value to binary
        string bin = "";
        while (val > 0)
        {
            (val % 2)? bin.push_back('1') :
                       bin.push_back('0');
            val /= 2;
        }
        reverse(bin.begin(), bin.end());

        cout << bin << " ";
    }
    cout<<" "<<endl;
}
Encryption::P(char * p)
{
    PX=new char[strlen(p)];
    strcpy(String,p);
    int NumOfRegisters=strlen(p);
    cout<<"Pleas Enter The Initial State "<<endl;

    cin>>PX;

}



Encryption::~Encryption()
{

    delete String;
}
