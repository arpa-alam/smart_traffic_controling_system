
#define LED_PIN_13 13
bool ledFlag = false;

uint32_t startTime = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN_13, OUTPUT);
  digitalWrite(LED_PIN_13, LOW);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (millis() - startTime > 2000){

    if (ledFlag)
    {
      digitalWrite(LED_PIN_13, HIGH);
    }
    else
    {
      digitalWrite(LED_PIN_13, LOW);
    }
    
    ledFlag = !ledFlag;
    
    Serial.println("Hello");
    startTime = millis();
  }
}
