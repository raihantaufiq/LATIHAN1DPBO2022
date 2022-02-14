#include <iostream>
#include <string>

#include "Tim_SepakBola.cpp"

using std::cout;
using std::endl;

int main(){
    //buat tim1
    Tim_SepakBola t1;
    t1.setNamaTim("Plains");
    t1.setNegaraAsal("GreenLand");
    t1.setTahunBerdiri("1999");
    t1.setJumlahPemainBek(3);
    t1.setJumlahPemainGelandang(5);
    t1.setJumlahPemainPenyerang(2);

    //buat tim 2
    Tim_SepakBola t2("Snow", "iceland", "2000");
    t2.setPemain(4, 4, 2);

    //buat tim3
    Tim_SepakBola t3("Glacier", "iceland", "2002", 3, 4, 3);

    //tampilkan list
    t1.tampilkan();
    t2.tampilkan();
    t3.tampilkan();

    return 0;
}
