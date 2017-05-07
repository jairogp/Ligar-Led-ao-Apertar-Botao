/*
 void setup() {
   pinMode (5, OUTPUT);
   pinMode (3, INPUT_PULLUP);
   }

 void loop() {
   int estado;
   estado = digitalRead (3);
   digitalWrite (5, !estado);
 }
 */
 

 void setup() {
  pinMode(5, OUTPUT);
  pinMode(3, INPUT_PULLUP);
 }
 
 void loop() {
  digitalWrite(5, !digitalRead (3) );
}
 
  
