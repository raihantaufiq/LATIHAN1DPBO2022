class TimSepakBola:
    #kelas tim sepakbola
    #konstruktor
    def __init__(self, nama_tim, negara_asal, tahun_berdiri, bek, gelandang, penyerang):
        self.nama_tim = nama_tim
        self.negara_asal = negara_asal
        self.tahun_berdiri = tahun_berdiri
        self.player = self.Pemain(bek, gelandang, penyerang)

    #set
    def setNamaTim(self, team):
        self.nama_tim = team

    def setNegaraAsal(self, country):
        self.negara_asal = country
    
    def setTahunBerdiri(self, year):
        self.tahun_berdiri = year

    #get
    def getNamaTim(self):
        return self.nama_tim

    def getNegaraAsal(self):
        return self.negara_asal
    
    def getTahunBerdiri(self):
        return self.tahun_berdiri


    class Pemain:
        #innerclass pemain
        #konstruktor
        def __init__(self, b, g, p):
            self.bek = b
            self.gelandang = g
            self.penyerang = p

        #set
        def setJmlPemainBek(self, b):
            self.bek = b

        def setJmlPemainGelandang(self, g):
            self.gelandang = g

        def setJmlPemainPenyerang(self, p):
            self.penyerang = p
        
        #get
        def getJmlPemainBek(self):
            return self.bek

        def getJmlPemainGelandang(self):
            return self.gelandang

        def getJmlPemainPenyerang(self):
            return self.penyerang
        
    #method
    def tampilkan(self):
        print("Nama Tim: " + self.getNamaTim())
        print("Negara Asal Tim: " + self.getNegaraAsal())
        print("Tahun Berdiri: " + self.getTahunBerdiri())
        print("Pemain")
        print("- Bek: ", self.player.getJmlPemainBek())
        print("- Gelandang: ", self.player.getJmlPemainGelandang())
        print("- Penyerang: ", self.player.getJmlPemainPenyerang())

