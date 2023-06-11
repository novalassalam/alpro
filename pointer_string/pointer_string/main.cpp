//
//  main.cpp
//  pointer_string
//
//  Created by Mac on 05/06/23.
//  Copyright © 2023 Mac. All rights reserved.
//

#include <iostream>
using namespace std;

char* GetString1()
{
    char *st = "String";
    return st;
}

char* GetString2()
{
    char st[] = "String";
    return st;
}

char* GetString3()
{
    char *st = new char[6];
    strcpy(st, "String");
    return st;
}

char const_to_pointer(){
    char char_A = 'A';
    char char_B = 'B';
    char *const myPtr = &char_A;
    return *myPtr;
}

char pointer_to_cons(){
    char char_A = 'A';
    const char *myPtr = &char_A;
    return *myPtr;
}


int main()
{
    cout<<GetString1()<<endl;
    cout<<GetString2()[0]<<endl;
    cout<<GetString3()<<endl;
    cout<<const_to_pointer()<<endl;
    cout<<pointer_to_cons()<<endl;
    
}

