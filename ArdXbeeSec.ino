float Sensibilidad = 0.066; //sensibilidad en V/A para nuestro sensor de 30A - 66mV/A - 0.066 v/A

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("Datos Vivienda 1");
  obtener_corriente1();//obtenemos la corriente pico
  //Serial.println("Datos Vivienda 2");
  obtener_corriente2();    
  //Serial.println("Datos Vivienda 3");
  obtener_corriente3(); 
  //Serial.println("Datos Vivienda 4");
  obtener_corriente4(); 
  //Serial.println("Datos Vivienda 5");
  obtener_corriente5();
  delay (3000);
}

void obtener_corriente1(){
  float Ip;
  float voltajeSensor;
  float corriente = 0;
  long tiempo = millis();
  float Imax=0;
  float Imin=0;
  while(millis() - tiempo<500){ 
    voltajeSensor = analogRead(A0) * (5.0 / 1023.0);//lectura 
    corriente = 0.9*corriente+0.1*((voltajeSensor-2.5)/Sensibilidad); //Ecuación  para obtener la corriente // v = I*m + 2.5 ; m : sensibilidad ---- I = (v - 2.5)/m
    if(corriente>Imax){
      Imax = corriente;
    }
    if(corriente<Imin){
      Imin = corriente;
    }
  }
  Ip =(Imax-Imin)/2;
  float Irms = Ip * 0.707; //Intensidad RMS = Ipico/(2^1/2)
  float P = Irms * 110.0; // P = I * V watts
  //Serial.print("Ip: ");  Serial.print(Ip,3); Serial.print("A  ");
  //Serial.print("Irms: "); Serial.print(Irms,3);Serial.print("A  ");
  //Serial.print("Potencia: ");
  Serial.print(P,3);
  Serial.print("  W "); 
  //delay(3000); 
  
}

void obtener_corriente2(){
  float Ip;
  float voltajeSensor;
  float corriente = 0;
  long tiempo = millis();
  float Imax=0;
  float Imin=0;
  while(millis() - tiempo<500){ 
    voltajeSensor = analogRead(A1) * (5.0 / 1023.0);//lectura
    corriente = 0.9*corriente+0.1*((voltajeSensor-2.5)/Sensibilidad); //Ecuación  para obtener la corriente
    if(corriente>Imax){
      Imax = corriente;
    }
    if(corriente<Imin){
      Imin = corriente;
    }
  }
  Ip =(Imax-Imin)/2;
  float Irms = Ip * 0.707; //Intensidad RMS = Ipico/(2^1/2)
  float P = Irms * 110.0; // P = I * V watts
  //Serial.print("Ip: ");  Serial.print(Ip,3); Serial.print("A  ");
  //Serial.print("Irms: "); Serial.print(Irms,3);Serial.print("A  ");
  //Serial.print("Potencia: "); 
  Serial.print(P,3);
  Serial.print("  W "); 
  //delay(3000);
}

void obtener_corriente3(){
  float Ip;
  float voltajeSensor;
  float corriente = 0;
  long tiempo = millis();
  float Imax=0;
  float Imin=0;
  while(millis() - tiempo<500){ 
    voltajeSensor = analogRead(A2) * (5.0 / 1023.0);//lectura
    corriente = 0.9*corriente+0.1*((voltajeSensor-2.5)/Sensibilidad); //Ecuación  para obtener la corriente
    if(corriente>Imax){
      Imax = corriente;
    }
    if(corriente<Imin){
      Imin = corriente;
    }
  }
  Ip =(Imax-Imin)/2;
  float Irms = Ip * 0.707; //Intensidad RMS = Ipico/(2^1/2)
  float P = Irms * 110.0; // P = I * V watts
  //Serial.print("Ip: ");  Serial.print(Ip,3); Serial.print("A  ");
  //Serial.print("Irms: "); Serial.print(Irms,3);Serial.print("A  ");
 // Serial.print("Potencia: ");
  Serial.print(P,3); 
  Serial.print("  W "); 
  //delay(3000);
}

void obtener_corriente4(){
  float Ip;
  float voltajeSensor;
  float corriente = 0;
  long tiempo = millis();
  float Imax=0;
  float Imin=0;
  while(millis() - tiempo<500){ 
    voltajeSensor = analogRead(A3) * (5.0 / 1023.0);//lectura
    corriente = 0.9*corriente+0.1*((voltajeSensor-2.5)/Sensibilidad); //Ecuación  para obtener la corriente
    if(corriente>Imax){
      Imax = corriente;
    }
    if(corriente<Imin){
      Imin = corriente;
    }
  }
  Ip =(Imax-Imin)/2;
  float Irms = Ip * 0.707; //Intensidad RMS = Ipico/(2^1/2)
  float P = Irms * 110.0; // P = I * V watts
  //Serial.print("Ip: ");  Serial.print(Ip,3); Serial.print("A  ");
  //Serial.print("Irms: "); Serial.print(Irms,3);Serial.print("A  ");
  //Serial.print("Potencia: "); 
  Serial.print(P,3);
  Serial.print("  W "); 
  delay(3000);
}

void obtener_corriente5(){
  float Ip;
  float voltajeSensor;
  float corriente = 0;
  long tiempo = millis();
  float Imax=0;
  float Imin=0;
  while(millis() - tiempo<500){ 
    voltajeSensor = analogRead(A4) * (5.0 / 1023.0);//lectura
    corriente = 0.9*corriente+0.1*((voltajeSensor-2.5)/Sensibilidad); //Ecuación  para obtener la corriente
    if(corriente>Imax){
      Imax = corriente;
    }
    if(corriente<Imin){
      Imin = corriente;
    }
  }
  Ip =(Imax-Imin)/2;
  float Irms = Ip * 0.707; //Intensidad RMS = Ipico/(2^1/2)
  float P = Irms * 110.0; // P = I * V watts
  //Serial.print("Ip: ");  Serial.print(Ip,3); Serial.print("A  ");
  //Serial.print("Irms: "); Serial.print(Irms,3);Serial.print("A  ");
  //Serial.print("Potencia: ");
  Serial.print(P,3); 
  Serial.println("  W "); 
  //delay(3000);
}
