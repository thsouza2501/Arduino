//Programa: farol de transito com sinal para faixa de pedestres

//OBS: diagrama de circuitos - vide imagem anexa - Tinkercad


void setup()
  
//Atribui a funcao de cada pino  

{
  pinMode(8, INPUT); //botao
  pinMode(9, OUTPUT); //luz verde pedestre
  pinMode(10, OUTPUT); //luz vermelha pedestre
  
  pinMode(11, OUTPUT); //luz verde carro
  pinMode(12, OUTPUT); //luz amarela carro
  pinMode(13, OUTPUT); //luz vermelha carro
}

//Logica do circuito

void loop()
{
 
  
  digitalWrite(9, LOW); //comeca c/ luz verde pedestre apagada
  digitalWrite(10, HIGH); //e luz vermelha pedestre acesa
    
  digitalWrite(13, HIGH); //ciclo luzes carro:
  delay(5000);            //vermelho aceso por 5s
  digitalWrite(13, LOW);
    
  digitalWrite(12, HIGH);
  delay(2500);            //amarelo aceso por 2.5s
  digitalWrite(12, LOW);
    
  digitalWrite(11, HIGH);
  delay(5000);            //verde aceso por 5s
  digitalWrite(11, LOW);
  
   
  if (digitalRead(8) == 0) { //caso o pedestre aperte o botao:
    
//OBS: caso esteja simulando no Tinkercad, manter o botao
//pressionado por alguns segundos   
    
    digitalWrite(12, HIGH); //acende o amarelo por 1s
    delay(1000);
    
    digitalWrite(12, LOW);
        
    digitalWrite (13, HIGH); //acende o vermelho para os carros
    
    digitalWrite(10, LOW); //apaga o vermelho dos pedestres
    digitalWrite(9, HIGH); //acende o verde dos pedestres
    delay(10000);          //verde aceso por 10s
    
    digitalWrite(9, LOW); //luz verde pedestre pisca por 1s
    delay(500);
    digitalWrite(9, HIGH);
    delay(500);
    
    digitalWrite(9, LOW); //luz verde pedestre pisca por 1s
    delay(500);
    digitalWrite(9, HIGH);
    delay(500);
    
    digitalWrite(9, LOW); //luz verde pedestre pisca por 1s
    delay(500);
    digitalWrite(9, HIGH);
    delay(500);
    
    digitalWrite(9, LOW); //luz verde pedestre pisca por 1s
    delay(500);
    digitalWrite(9, HIGH);
    delay(500);
    
    digitalWrite(9, LOW); //luz verde pedestre pisca por 1s
    delay(500);
    digitalWrite(9, HIGH);
    delay(500);
        
  } 
}
