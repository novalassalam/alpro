#include <iostream>

struct MyStruct
{
    int valx; // default == public
public:
    int val1;
private:
    int val2 = 20;
protected:
    int val3 = 30;

public:
    // Metode untuk mengakses anggota private
    int GetVal2(int c) const
    {
//        return c;
        return val2;
    }

    // Metode untuk mengakses anggota protected
    int GetVal3() const
    {
        
        return val3;
    }
    
};

struct DerivedStruct : public MyStruct
 {
     int GetVal3_() const
     {
         return 40;
     }
 };

int main()
{
    MyStruct mine;

    // Mengakses dan mengubah anggota publik
    mine.valx=5;
    mine.val1=10;
    // Tidak dapat mengakses anggota private atau protected
    // mine.val2 = 30; // Akan menghasilkan error
    // mine.val3 = 40; // Akan menghasilkan error
    

    // Mengakses anggota private dan protected melalui metode publik
    int val2 = mine.GetVal2(1);
    int val3 = mine.GetVal3();
    
    DerivedStruct derived;

    // Mengakses anggota protected melalui kelas turunan
    int val3_ = derived.GetVal3_();


    // Mencetak nilai anggota publik, private, dan protected
    std::cout << "valx: " << mine.valx << std::endl;
    std::cout << "val1: " << mine.val1 << std::endl;
    std::cout << "val2 (private): " << val2 << std::endl;
    std::cout << "val3 (protected): " << val3 << std::endl;
    std::cout << "val3 (protected): " << val3_ << std::endl;

    return 0;
}

//public: tersedia untuk semua
//private: tersedia hanya didalam struct
//protected: tersedia didalam struct dan penerimaan struct (OOP)

