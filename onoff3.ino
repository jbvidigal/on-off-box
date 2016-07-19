// Connect the pole of the switch to pin 2
const int SW_PIN = 2;
// Connect the LED to pin 4
const int LED_PIN = 4;

void setup()
{
    // Sets the pin modes
    pinMode(SW_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  if (digitalRead(SW_PIN) == HIGH)
  {
    // binary ON = 01101111 01101110
    digitalWrite(LED_PIN, LOW);    
    delay(50);              
    digitalWrite(LED_PIN, HIGH);   
    delay(100);              
    digitalWrite(LED_PIN, LOW);    
    delay(50);              
    digitalWrite(LED_PIN, HIGH);   
    delay(200);              
    digitalWrite(LED_PIN, LOW);    
    delay(50);              
    digitalWrite(LED_PIN, HIGH);   
    delay(100);              
    digitalWrite(LED_PIN, LOW);    
    delay(50);              
    digitalWrite(LED_PIN, HIGH);   
    delay(150);              
    digitalWrite(LED_PIN, LOW);    
    delay(50);                  
  }
  else
  {
    // binary OFF = 01101111 01100110 01100110
    digitalWrite(LED_PIN, LOW);    
    delay(50);              
    digitalWrite(LED_PIN, HIGH);   
    delay(100);              
    digitalWrite(LED_PIN, LOW);    
    delay(50);              
    digitalWrite(LED_PIN, HIGH);   
    delay(200);              
    digitalWrite(LED_PIN, LOW);    
    delay(50);              
    digitalWrite(LED_PIN, HIGH);   
    delay(100);              
    digitalWrite(LED_PIN, LOW);    
    delay(100);              
    digitalWrite(LED_PIN, HIGH);   
    delay(100);              
    digitalWrite(LED_PIN, LOW);    
    delay(100);              
    digitalWrite(LED_PIN, HIGH);   
    delay(100);              
    digitalWrite(LED_PIN, LOW);    
    delay(100);              
    digitalWrite(LED_PIN, HIGH);   
    delay(100);              
    digitalWrite(LED_PIN, LOW);    
    delay(50);                  
  }
}

