//judul : jenis jenis parameter pada fungsi//

#include <iostream>

using namespace std;


//kamus


//algortima


int value1(int a, int b){

return a+b;

}

int value2(int a, int b =5){
return a+b;
}







int main()
{
    //cout << value1(4) << endl; //pemanggilan disebut parameter aktual

    cout << value1(4,2) << endl; //pemanggilan disebut parameter aktual

    cout << parameter2(4,4)<<endl;
    cout << parameter2(2)<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
