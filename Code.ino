/* 
  Autor: Mateus Lima
  Descrição: Este é um código que possibilita o controle de um 
             carro bluetooth montado em arduino com uma shield 
             ponte H, através do protocolo serial
*/
/*
  É necessario incluir a biblioteca 'AFMotor' pois simplifica o 
  uso da Shield ponte H
*/

//#include <AFMotor.h>

//selecionamos os canais 3 e 4 para motor direito e esquerdo
//respectivamente

//AF_DCMotor motor_dir(3);
//AF_DCMotor motor_esq(4);

/*
  Aqui definimos a velocidade máxima dos motores porem isso 
  depende tambem da fonte de energia que esteja utilizando 
  para alimentar os motores, logo se o valor atribuido for 
  equivalente a 255, por PWM os motores receberão tensão 
  total da fonte que estiver utilizando.
*/
//#define vel_dir 255
//#define vel_esq 255
/*
   Variáveis que controlaram as velocidades do motor direito 
   e esquerdo
*/

//int vSpeed_dir = 200; 
//int vSpeed_esq = 200;

//variável que atribuimos a leitura Serial do módulo bluetooth

char state;

void setup() {
  // Inicializa a comunicação serial em 9600 bits.
  Serial.begin(9600);
}

void loop() {
  // Atribui os valores da leitura serial na variável "state"
  if (Serial.available() > 0) {
    state  = Serial.read();
    Serial.write(state);
  }

  /*
    Aqui controlamos a velocidade que o carro bluetooth irá
    se locomover, portanto multiplicamos a velocidade maxima
    por valores decimais para reduzir proporcionamente as 
    velocidades dos motores direito e esquerdo. 
    
    Quando a variavel "state" assumir o caractere 7,através do meio 
    serial, as velocidades são correspondentes à 70% da velocidade 
    máxima dos motores
  */
  
  if (state == '0') {
    
  }
  else if (state == '4') {
    
  }
  else if (state == '6') {
    
  }
  else if (state == '7') {
    
  }
  else if (state == '8') {
    
  }
  else if (state == '9') {
    
  }
  else if (state == 'q') {
    
  }

  // Se o estado recebido for igual a 'F', o carro se movimenta para frente.
  if (state == 'F') {
    
  }

  else if (state == 'G') {  // Se o estado recebido for igual a 'I', o carro se movimenta para Frente Esquerda.
    
  }

  else if (state == 'I') {   // Se o estado recebido for igual a 'G', o carro se movimenta para Frente Direita.
    
  }

  else if (state == 'B') { // Se o estado recebido for igual a 'B', o carro se movimenta para trás.
    
  }

  else if (state == 'H') {  // Se o estado recebido for igual a 'H', o carro se movimenta para Trás Esquerda.
    
  }

  else if (state == 'J') {  // Se o estado recebido for igual a 'J', o carro se movimenta para Trás Direita.
    
  }

  else if (state == 'L') {   // Se o estado recebido for igual a 'L', o carro se movimenta para esquerda.
    
  }
  else if (state == 'R') {   // Se o estado recebido for igual a 'R', o carro se movimenta para direita.
    
  }
  else if (state == 'S') {   // Se o estado recebido for igual a 'S', o carro permanece parado.
    
  }
}
