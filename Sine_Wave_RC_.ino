// Sine via high-frequency PWM 
const int samples = 100;
uint8_t sineTable[samples];

void setupTimer1FastPWM() {
  pinMode(9, OUTPUT);
 
  TCCR1A = _BV(COM1A1) | _BV(WGM10);
  TCCR1B = _BV(WGM12) | _BV(CS10);      
 
}

void setup() {

  for (int i = 0; i < samples; ++i) {
    float v = sin(2.0 * PI * i / samples);
    sineTable[i] = (uint8_t)(v * 127.5 + 127.5);
  }
  setupTimer1FastPWM();
}

void loop() {

  const unsigned int sample_period_us = 200; 
  for (int i = 0; i < samples; ++i) {
    OCR1A = sineTable[i];            
    delayMicroseconds(sample_period_us);
  }
}
