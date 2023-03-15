//
//  main.cpp
//  variabel
//
//  Copyright © 2023 Mac. All rights reserved.
//

#include <iostream>

int mGlobalVar; //variabel global

void Foo()
{
   int localVar; //variabel lokal
   printf("Foo : %d %d\n",
        localVar, mGlobalVar);
}

static int s_iGlobalStatic;

void static_foo()
{
    static int s_iLocalStatic; //variabel statis
    printf("Foo: called %d\n",
        s_iLocalStatic++);
}




int main()
{
    int localVar = 1;
    printf("Main: %d %d\n",
        localVar, mGlobalVar);
    mGlobalVar = 1;
    Foo();
    Foo();
    Foo();
    
    printf("Main: %d\n",
            s_iGlobalStatic);
       static_foo();
       static_foo();
       static_foo();
    return 1;
}

