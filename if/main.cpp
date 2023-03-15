#include <iostream>

using namespace std;

string usia(int umur){

    if(umur > 17){
        return "dewasa";
    }else{
        return "anak anak";
    }
}


string usia2(int umr){
    return (umr > 17) ?"dewasa" : "anak-anak";
}

int main()
{
    cout << usia(14) << endl;
    cout << usia2(14) << endl;
    return 0;
}
