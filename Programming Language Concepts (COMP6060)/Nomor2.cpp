#include <iostream>
using namespace std;

class customer {
    public:
        string customerNIM = "2201741971";
        string namaCustomer="EDWARD";
};

class kamar {
    public:
        string kodeKamar = "400";
        string LuasatauSempit = "Luas";
};

class Transaksi : public customer, public kamar {
    public:
        string nomorTransaksi = "081289434641";
};

int main() {
    Transaksi obj;
    cout<<"NIM Customer      = "<< obj.customerNIM <<endl;
    cout<<"Nama Customer     = "<< obj.namaCustomer <<endl;
    
    cout<<"Kode Kamar        = "<< obj.kodeKamar <<endl;
    cout<<"Luas atau Sempit? = "<< obj.LuasatauSempit <<endl;
    
    cout<<"Nomor Transaksi   = "<< obj.nomorTransaksi <<endl;
    return 0;
}
