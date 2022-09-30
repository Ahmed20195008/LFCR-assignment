#include <iostream>
#include "Encryption.h"
using namespace std;

int main()
{
    char arr[]="Mahmoud Atef";
    char arr2[]="Mahmoud Atef";

    Encryption String1;
    Encryption String2(arr2);

    String1.encryption(arr);
    String1.P(arr);


    return 0;
}
