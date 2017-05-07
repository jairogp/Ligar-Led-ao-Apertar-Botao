
 void setup() {
   pinMode (5, OUTPUT);
   pinMode (3, INPUT);
   }

 void loop() {
   int estado;
   estado = digitalRead (3);
   digitalWrite (5, estado);
 }
