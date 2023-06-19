#include <iostream>
using namespace std;
//model1
typedef struct {
    int bilangan1;
    int bilangan2;
} HitungBilangan1;

//model2
typedef struct HitungBilangan2
{
    int bilangan1,bilangan2;
    
    void Hb2()
    {
        bilangan1 = 2;
        bilangan2 = 3;
        int hasil = bilangan1+bilangan2;
        cout<< hasil<< endl;
    }
    
} HitungBilangan2;

//model3 panggil void kosong
typedef struct HitungBilangan3
{
    int bilangan1,bilangan2;
    void Hb3(); // deklar kosong
} HitungBilangan3;

void HitungBilangan3::Hb3() //direplace
{
    bilangan1 = 2;
    bilangan2 = 3;
    int hasil = bilangan1+bilangan2;
    cout<< hasil<< endl;
}


int main() {
    
//    model1
    HitungBilangan1 hb1;
    hb1.bilangan1 = 2;
    hb1.bilangan2 = 3;
    int hasil = hb1.bilangan1+ hb1.bilangan2;
    cout<< hasil<< endl;
    
//    model2
    HitungBilangan2 hb2;
    hb2.Hb2();
    
//    model3
    HitungBilangan3 hb3;
    hb3.Hb3();
    
    return 0;
}
