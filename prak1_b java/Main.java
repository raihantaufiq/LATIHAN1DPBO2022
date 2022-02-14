import java.util.Scanner;

class Main {
    
    public static void main(String[] args){
        
        //array tim sepakbola
        TimSepakBola[] team = new TimSepakBola[2];

        //mengisi data tim
        //tim 1
        team[0] = new TimSepakBola("Mountain", "Highland", "1998", 3, 4, 3);

        //tim2
        team[1] = new TimSepakBola();
        team[1].setNamaTim("Sea");
        team[1].setNegaraAsal("Netherland");
        team[1].setTahunBerdiri("1987");
        team[1].setJumlahPemainBek(3);
        team[1].setJumlahPemainGelandang(5);
        team[1].setJumlahPemainPenyerang(2);

        //tampilkan list
        int i;
        for(i=0; i<2; i++){
            team[i].tampilkan();
        }

    }

}
