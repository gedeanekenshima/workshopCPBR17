/*******************************************************************************
*
*  Blink LED
*  
*  Adaptado por: Gedeane Kenshima
*
*
*******************************************************************************/
//Vamos começar definindo o pino para LED
const int LED = 13;
 
// Função de configuração
void setup() {
  // Configura LED como saída
  pinMode(LED, OUTPUT);
}
 
// Função de repetição
void loop() {
  // Acende LED
  digitalWrite(LED, HIGH);
  // Aguarda 1s
  delay (1000);
  // Apaga LED
  digitalWrite(LED, LOW);
  // Aguarda 1s
  delay (1000);
  }
 // Fim do programa
