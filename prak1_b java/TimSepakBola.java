class TimSepakBola {

    private String nama_tim;
    private String negara_asal;
    private String tahun_berdiri;
    private Pemain player = new Pemain();
    
    class Pemain{
        private int bek;
        private int gelandang;
        private int penyerang;

        Pemain(){
            //konstruktor
        }

        Pemain(int back, int mid, int front){
            //konstruktor
            this.bek = back;
            this.gelandang = mid;
            this.penyerang = front;
        }

        //set
        public void setBek(int b){
            this.bek = b;
        }

        void setGelandang(int g){
            this.gelandang = g;
        }

        void setPenyerang(int p){
            this.penyerang = p;
        }

        //get
        int getBek(){
            return this.bek;
        }

        int getGelandang(){
            return this.gelandang;
        }

        int getPenyerang(){
            return this.penyerang;
        }
        
    }


    TimSepakBola(){
        //konstruktor
    }

    TimSepakBola(String nama_tim, String negara, String tahun_berdiri, int b, int g, int p){
        //konstruktor
        this.nama_tim = nama_tim;
        this.negara_asal = negara;
        this.tahun_berdiri = tahun_berdiri;
        this.player.setBek(b);
        this.player.setGelandang(g);
        this.player.setPenyerang(p);
    }

    //set
    void setNamaTim(String nama_tim){
        this.nama_tim = nama_tim;
    }

    void setNegaraAsal(String negara){
        this.negara_asal = negara;
    }

    void setTahunBerdiri(String tahun){
        this.tahun_berdiri = tahun;
    }

    void setJumlahPemainBek(int b){
        this.player.setBek(b);
    }

    void setJumlahPemainGelandang(int g){
        this.player.setGelandang(g);
    }

    void setJumlahPemainPenyerang(int p){
        this.player.setPenyerang(p);
    }

    //get
    String getNamaTim(){
        return this.nama_tim;
    }

    String getNegaraAsal(){
        return this.negara_asal;
    }

    String getTahunBerdiri(){
        return this.tahun_berdiri;
    }

    int getJumlahPemainBek(){
        return this.player.getBek();
    }

    int getJumlahPemainGelandang(){
        return this.player.getGelandang();
    }

    int getJumlahPemainPenyerang(){
        return this.player.getPenyerang();
    }

    //method
    void tampilkan(){
        System.out.println("Nama Tim: " + getNamaTim());
        System.out.println("Negara Asal Tim: " + getNegaraAsal());
        System.out.println("Tahun Berdiri: " + getTahunBerdiri());
        System.out.println("Pemain");
        System.out.println("- Bek: " + getJumlahPemainBek());
        System.out.println("- Gelandang: " + getJumlahPemainGelandang());
        System.out.println("- Penyerang: " + getJumlahPemainPenyerang());
        System.out.println("");
    }

}