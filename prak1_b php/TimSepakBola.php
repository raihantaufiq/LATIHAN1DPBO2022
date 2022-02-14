<?php

class TimSepakBola{

    private $nama_tim;
    private $negara_asal;
    private $tahun_berdiri;
    private $pemain_bek;
    private $pemain_gelandang;
    private $pemain_penyerang;

    //konstruktor
    function __construct($team="", $country="", $year="", $b="", $g="", $p=""){
        $this->nama_tim = $team;
        $this->negara_asal = $country;
        $this->tahun_berdiri = $year;
        $this->pemain_bek = $b;
        $this->pemain_gelandang = $g;
        $this->pemain_penyerang = $p;
    }

    //set
    public function setNamaTim($team){
        $this->nama_tim = $team;
    }

    public function setNegaraAsal($country){
        $this->negara_asal = $country;
    }

    public function setTahunBerdiri($year){
        $this->tahun_berdiri = $year;
    }

    public function setPemainBek($b){
        $this->pemain_bek = $b;
    }

    public function setPemainGelandang($g){
        $this->pemain_gelandang = $g;
    }

    public function setPemainPenyerang($p){
        $this->pemain_penyerang = $p;
    }

    //get
    public function getNamaTim(){
        return $this->nama_tim;
    }

    public function getNegaraAsal(){
        return $this->negara_asal;
    }

    public function getTahunBerdiri(){
        return $this->tahun_berdiri;
    }

    public function getPemainBek(){
        return $this->pemain_bek;
    }

    public function getPemainGelandang(){
        return $this->pemain_gelandang;
    }

    public function getPemainPenyerang(){
        return $this->pemain_penyerang;
    }

    //method
    public function tampilkan(){
        echo "Nama Tim: ".$this->getNamaTim()."<br/>";
        echo "Negara Asal Tim: ".$this->getNegaraAsal()."<br/>";
        echo "Tahun Berdiri: ".$this->getTahunBerdiri()."<br/>";
        echo "Pemain <br/>";
        echo "- Bek: ".$this->getPemainBek()."<br/>";
        echo "- Gelandang: ".$this->getPemainGelandang()."<br/>";
        echo "- Penyerang: ".$this->getPemainPenyerang()."<br/>";
        echo "<br/>";
    }
    
}

?>