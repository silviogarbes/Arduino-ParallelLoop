#ParallelLoop Library for Arduino

This library causes Pseudo-thread to be created to simulate parallel processes. In a simplified way one can work with predetermined cycles of execution or manipulate the time of cycles at runtime.

Available methods:

    void resetTime();
    unsigned long timeRunning();
    bool cycleLevel();

Examples:

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



For more information about this library please visit us at
https://github.com/silviogarbes/Arduino-ParallelLoop

#License

Copyright (c) 2010 Arduino LLC. All right reserved.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
