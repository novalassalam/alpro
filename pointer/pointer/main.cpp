
//Program Pointer
  
#include<iostream>
using namespace std;

void deference()
{
  int x=8;  // nilai var x
  int *xPtr; //* deklarasi variabel pointer
  xPtr = &x; // & alamat pointer
  cout<<"Nilai x = "<<x<<endl;
  cout<<"Alamat x = "<<&x<<endl;
  cout<<"Alamat x = "<<xPtr<<endl;
  cout<<"Nilai yang disimpan pada alamat ";
  cout<<xPtr<<" adalah "<<*xPtr;
    
}

void reference(){
    int x=8, y;
    int *xPtr;
    xPtr = &x;
    y = *xPtr;
    cout<<"Nilai x = "<<x<<endl;
    cout<<"Alamat x = "<<&x<<endl;
    cout<<"Alamat x = "<<xPtr<<endl;
    cout<<"Nilai yang disimpan pada alamat ";
    cout<<xPtr<<" adalah "<<y;
}


void deklarasi(){
    int i =10;
    int *p =&i;
    cout<<"p (alamat memori dari variabel i): "<<p<<endl;
    cout<<"*p (value pointer): "<<*p<<endl;
    cout<<"&p (alamat memori dari pointer): "<<&p<<endl;
}



void array_pointer(){
    int a[] = {10, 20, 30, 40, 50, 60};
    int *p = a;
    int i;
    int *Ptr_Nilai;
    Ptr_Nilai = a;
    
    cout<<"Nilai p  : "<<p<<endl;
    cout<<"Nilai a[2] : "<<a[2]<<endl;
    cout<<"Nilai Ptr_Nilai  : "<<Ptr_Nilai<<endl;
    cout<<"Nilai *Ptr_Nilai  : "<<*Ptr_Nilai<<endl;
    cout<<"Nilai &Ptr_Nilai  : "<<&Ptr_Nilai<<endl;
    for(i=0;i<7;i++)
        cout<<a[i]<<" "; //mencetak elemen array
}

void pointer_pointer(){
    int x=8;
    int *xPtr1;
    int **xPtr2;
    xPtr1 = &x;
    xPtr2 = &xPtr1;
    cout<<"Nilai x = "<<x<<endl;
    cout<<"Nilai xPtr1 = "<<xPtr1<<endl;
    cout<<"Nilai *xPtr1 = "<<*xPtr1<<endl;
    cout<<"Nilai &xPtr1 = "<<&xPtr1<<endl;
    cout<<"Nilai xPtr2 = "<<xPtr2<<endl;
    cout<<"Nilai **xPtr2 = "<<**xPtr2<<endl;
    cout<<"Nilai &**xPtr2 = "<<&**xPtr2<<endl;
}

int main(){
    deference();
    cout<<"---------------"<<endl;
    reference();
    cout<<"---------------"<<endl;
    deklarasi();
    cout<<"---------------"<<endl;
    array_pointer();
    cout<<"---------------"<<endl;
    pointer_pointer();
}
