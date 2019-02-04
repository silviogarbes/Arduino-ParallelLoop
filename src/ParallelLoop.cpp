#include <ParallelLoop.h> // Inclui a declaração
// Inclui bibliotecas padrão
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <Arduino.h>

ParallelLoop::ParallelLoop(){
  time = millis();
}
ParallelLoop::ParallelLoop(int aux){
  time = millis();
  cycleTime = aux;
}
void ParallelLoop::resetTime(){
  time = millis();
}
unsigned long ParallelLoop::timeRunning(){
  return millis() - time;
}
bool ParallelLoop::cycleLevel(){
  if(timeRunning() > (cycleTime * 2)){
    resetTime();
  }
  if(timeRunning() > cycleTime){
    return true;
  }else{
    return false;
  }
}