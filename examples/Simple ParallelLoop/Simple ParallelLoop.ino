#include <ParallelLoop.h>

ParallelLoop loop2;
ParallelLoop loop3(300); // Com ciclo de 300 milisegundos

void setup(){
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop(){
  // Usando controle do tempo
  if(loop2.timeRunning() > 500){
    digitalWrite(8, HIGH);
  }else{
    digitalWrite(8, LOW);
  }
  if(loop2.timeRunning() > 1000){
    loop2.resetTime();
  }
  
  // Usando ciclos pre definido
  if(loop3.cycleLevel()){
    digitalWrite(9, HIGH);
  }else{
    digitalWrite(9, LOW);
  }
}
