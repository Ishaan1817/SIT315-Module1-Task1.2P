const int pir = 4;
 bool led_state = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(pir), toggle, RISING);
}

void loop() 
  {
  if (led_state== HIGH)
    {
    Serial.println("Motion detected");
    }
    else
    {
      Serial.println("Motion not detected");
    }
  }
  


void toggle()
{
  led_state = !led_state;
  digitalWrite(13, led_state);
}