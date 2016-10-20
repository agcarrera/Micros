/*  Univerdidad Tecnica Del Norte
          FICA-CIERCOM
          Anderson Carrera
          18/10/2016
  3 juegos continuos de leds
 */
int leds [13]={1,2,3,4,5,6,7,8,9,10,11,12,13}; //declaracion de vector
int contador=0;
int contador_1=0;
int contador_2=0;
void setup() {
  // put your setup code here, to run once:
 pinMode(1,OUTPUT); 
 pinMode(2,OUTPUT); //declarar pin como salida
 pinMode(3,OUTPUT); 
 pinMode(4,OUTPUT); //declarar pin como salida
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT); //declarar pin como salida
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT); //declarar pin como salida
 pinMode(9,OUTPUT); 
 pinMode(10,OUTPUT); //declarar pin como salida
 pinMode(11,OUTPUT); 
 pinMode(12,OUTPUT); //declarar pin como salida
 pinMode(13,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
 luces();
 delay(200);
 luces_1();
 delay(200);
 luces_2;
 delay(200);
}

void luces (){
    for(;contador<13;contador++){
    digitalWrite(leds[contador+2],HIGH);
    delay(100);
    digitalWrite(leds[contador],LOW);
     delay(100);
    }
    contador=0;
  }
  void luces_1(){ 
int k=13;                                      
for(contador_1=6; contador_1<=13;contador_1++){    
digitalWrite(leds[contador_1],HIGH);             
digitalWrite(k-leds[contador_1],HIGH);          
delay(100); 
} 
for(int contador_1=13; contador_1>=0;contador_1--){    
digitalWrite(leds[contador_1], LOW); 
digitalWrite(k-leds[contador_1], LOW); 
delay(100); 
contador_1=0;
} 

}
  
  
 void luces_2(){
  for(;contador_2<13;contador_2++){
      digitalWrite(leds[contador_2],HIGH);
      delay(100);
  }
    for(contador_2=1;contador_2<=13;contador_2++){
      digitalWrite(leds[contador_2+2],LOW);
      delay(100);
    }
   contador_2=0;
  }  
  


     
