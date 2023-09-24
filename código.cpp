int ledVerde = 7; // definindo pino de LEDS
int ledAmarelo = 6; // definindo pino de LEDS
int ledVermelho = 5; // definindo pino de LEDS
int buzzerAlarm = 12; // definindo pino de Buzzer

int sensorLDR = A5; // definindo pino do SensorLDR

void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzerAlarm, OUTPUT);
  pinMode(sensorLDR, INPUT);
  Serial.begin(9600);
}

// Iniciando loop usando a variável do LDR como base para ascender os LEDs.
void loop()
{
  int leitura = analogRead(sensorLDR);
  Serial.print("Leitura: ");
  Serial.println(leitura);

  if(analogRead(sensorLDR) > 700){ 
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
    noTone(buzzerAlarm);
  }  
  else if (analogRead(sensorLDR) > 120) { 
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, LOW);
    tone(buzzerAlarm, 261);
    digitalWrite(buzzerAlarm, HIGH);
    delay(3000);
    noTone(buzzerAlarm);
    digitalWrite(buzzerAlarm, LOW);
    delay(3000);
  }
  else{
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVerde, LOW);
    tone(buzzerAlarm,261);
 	digitalWrite(buzzerAlarm, HIGH);
  }
  delay(1000); // adicionando 1s de leitura entre os códigos
}