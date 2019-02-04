
#ifndef ParallelLoop_h // Se não definido o ParallelLoop_h
#define ParallelLoop_h // Define o ParallelLoop_h
#include <Arduino.h> // Usa alguns recursos padrão do arduino ex. pinMode

class ParallelLoop {
  private:
    unsigned long time = 0;
    int cycleTime = 0;
  public:
    ParallelLoop();
    ParallelLoop(int); // Inicia com ciclo
    void resetTime();
    unsigned long timeRunning();
    bool cycleLevel();
};

#endif