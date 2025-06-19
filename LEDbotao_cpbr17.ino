/*******************************************************************************
*
*  LED e botão
*  
*  Adaptado por: Gedeane Kenshima
*
*
*******************************************************************************/
//Vamos começar definindo o pino para LED
const int LED = 13;

// Definindo pino para botao
const int botao = 2;
 
// Função de configuração
void setup() {
  // Configura LED como saída
  pinMode(LED, OUTPUT);
  // Configura botao como entrada
  pinMode(botao, INPUT);
}
 
// Função de repetição
void loop() {
  // Declara variável leitura para guardar valor
  int leitura = digitalRead(botao);
  // Verifica se leitura é HIGH (botao pressionado)
  if (leitura == HIGH){
     // Acende LED
     digitalWrite(LED, HIGH);
     }
  // Botao não pressionado
  else{
     // Apaga LED
     digitalWrite(LED, LOW);
     }
  // Aguarda 0,1s
  delay (100);
  }
 // Fim do programa
