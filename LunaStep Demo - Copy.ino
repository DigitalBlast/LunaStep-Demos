int val = 0;

void setup() {
  pinMode( 8, INPUT );

 Serial.begin( 9600 ); //Start serial on 9600 baud
}

void loop() {
  if( digitalRead( 8 ) == HIGH ) { // If mat/button is triggered, write to the serial monitor
    Serial.println( "Circut complete" );
    val++;
    Serial.println( val );
  }

  delay( 1000 ); // This is here to prevent from spamming the serial monitor
}