#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Tim_SepakBola{//kelas tim sepakbola

    private:
        string nama_tim;
        string negara_asal;
        string tahun_berdiri;

        class Pemain{//innerclass pemain
            private:
                int bek;
                int gelandang;
                int penyerang;

            public:
                Pemain(){
                    //konstruktor
                }


                //set
                void setJumlahPemainBek(int b){
                    bek = b;
                }

                void setJumlahPemainGelandang(int g){
                    gelandang = g;
                }

                void setJumlahPemainPenyerang(int p){
                    penyerang = p;
                }

                //get
                int getJumlahPemainBek(){
                    return bek;
                }

                int getJumlahPemainGelandang(){
                    return gelandang;
                }

                int getJumlahPemainPenyerang(){
                    return penyerang;
                }


                ~Pemain(){
                    //destruktor
                }
        };
        Pemain player; //deklarasi pemain

    public:
        Tim_SepakBola(){
            //konstruktor
        }

        Tim_SepakBola(string team, string country, string year){
            //konstruktor
            nama_tim = team;
            negara_asal = country;
            tahun_berdiri = year;
        }

        Tim_SepakBola(string team, string country, string year, int bek, int gelandang, int penyerang){
            //konstruktor
            nama_tim = team;
            negara_asal = country;
            tahun_berdiri = year;
            setPemain(bek, gelandang, penyerang);
        }


        //set
        void setNamaTim(string team){
            nama_tim = team;
        }

        void setNegaraAsal(string country){
            negara_asal = country;
        }

        void setTahunBerdiri(string year){
            tahun_berdiri = year;
        }

        void setPemain(int b, int g, int p){
            player.setJumlahPemainBek(b);
            player.setJumlahPemainGelandang(g);
            player.setJumlahPemainPenyerang(p);
        }

        void setJumlahPemainBek(int b){
            player.setJumlahPemainBek(b);
        }

        void setJumlahPemainGelandang(int g){
            player.setJumlahPemainGelandang(g);
        }

        void setJumlahPemainPenyerang(int p){
            player.setJumlahPemainPenyerang(p);
        }

        //get
        string getNamaTim(){
            return nama_tim;
        }

        string getNegaraAsal(){
            return negara_asal;
        }

        string getTahunBerdiri(){
            return tahun_berdiri;
        }

        int getJumlahPemainBek(){
            return player.getJumlahPemainBek();
        }

        int getJumlahPemainGelandang(){
            return player.getJumlahPemainGelandang();
        }

        int getJumlahPemainPenyerang(){
            return player.getJumlahPemainPenyerang();
        }

        //methods
        void tampilkan(){
            cout << "Nama Tim : " << getNamaTim() << endl;
            cout << "Negara Asal Tim: " << getNegaraAsal() << endl;
            cout << "Tahun Berdiri : " << getTahunBerdiri() << endl;
            cout << "Pemain" << endl;
            cout << "- Bek : " << getJumlahPemainBek() << endl;
            cout << "- Gelandang : " << getJumlahPemainGelandang() << endl;
            cout << "- Penyerang : " << getJumlahPemainPenyerang() << endl;
            cout << "" << endl;
        }


        ~Tim_SepakBola(){
            //destruktor
        }

};