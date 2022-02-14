<?php

    include "TimSepakBola.php";

    //buat tim
    $team1 = new TimSepakBola("Good" ,"Farland", "1988", "4", "3", "3");

    $team2 = new TimSepakBola();
    $team2->setNamaTim("Cannon");
    $team2->setNegaraAsal("Westland");
    $team2->setTahunBerdiri("2000");
    $team2->setPemainBek("3");
    $team2->setPemainGelandang("5");
    $team2->setPemainPenyerang("2");

    //tampilkan list
    $team1->tampilkan();
    $team2->tampilkan();

?>