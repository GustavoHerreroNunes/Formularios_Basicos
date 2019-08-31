/*Este pequeno código se trata de uma sistema de farol de pedestres, onde quando é clicado o botão, o farol
fica liberado aos pedestres, e depois volta a ficar liberado aos carros, até ser clicado o botão
*/

int Button = LOW;//Criando variavel inteira que sera atribuida para o push button da placa

void setup(){
	pinMode(12, INPUT);//Pino em que será lida a entrada fornecida pelo botão
	
	/*Pinos para controle dos farois*/
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	
}void loop(){
	Button = digitalRead(12);//Button é igual a leitura do pino 12, que lê se há corrente passa pelo botão
	
	/*Sisteminha para os farois ficarem VERDE para o carro e VERMELHO aos pedestres*/
	digitalWrite(3, HIGH);
	digitalWrite(6, LOW);
	digitalWrite(2, LOW);
	digitalWrite(4, HIGH);
	
	
	/*Se o botão for precionado, o programa deve iniciar essas especificações*/
	if(Button >= HIGH){
      	delay(2500);
      	digitalWrite(4,LOW);
		digitalWrite(5, HIGH);
		delay(2000);
		digitalWrite(5, LOW);
      	digitalWrite(3, LOW);
		digitalWrite(6, HIGH);
		digitalWrite(2, HIGH);
		delay(2500);
      	digitalWrite(2, LOW);
      	delay(500);
      	digitalWrite(2, HIGH);
      	delay(500);
      	digitalWrite(2, LOW);
      	delay(500);
      	digitalWrite(2, HIGH);
      	delay(500);
      	digitalWrite(2, LOW);
      	delay(500);
      	digitalWrite(2, HIGH);
      	delay(500);
      	digitalWrite(2, LOW);
      	delay(500);
      	digitalWrite(2, HIGH);
      	delay(500);
    }else{
      	
    
    	
    }
}