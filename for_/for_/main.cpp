/* Program for */

#include <stdio.h>
#include <iostream>
using namespace std;

void turun(){
int a;
for(a = 10; a >= 1; a-=1)
    cout<<a;
}

void naik(){
    int a;
    for(a = 1; a <= 10; a+=1)
    cout<<a;
}


void ganjil(){
int a;
for(a = 1; a <= 10; a+=2)
cout<<a;
}


int main()
{
naik();
cout  <<" \n";
turun();
cout  <<" \n";
ganjil();

return 0 ;
}
