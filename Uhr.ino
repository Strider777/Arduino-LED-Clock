// Uhr-Funktionaliät
//----------------------------------
// Sorgt für die Uhrzeit 


void Uhrzeit(){

 UhrSekunde=tc;
  
 
  if (UhrSekunde==60){
    UhrMinute=UhrMinute+1;
    UhrSekunde=0;
    tc=0;
    if (UhrMinute==60){
      UhrMinute=0;
      UhrStunde=UhrStunde+5;
      if (UhrStunde=60){
        UhrStunde=0;
      }
    }
  }

}
