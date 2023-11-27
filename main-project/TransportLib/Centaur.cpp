#include "Centaur.h"

namespace TransportLib {
   Centaur::Centaur() {
      speed = 15;
      timeToChill = 8;
      chillTime = 2;
   }

   double Centaur::getResult(int distance) {
      double restTime;
      double time = (double)distance / (double)speed;

      restTime = time;
      time = 0;

      while (restTime > 0)
      {
         if (restTime >= timeToChill) {
            if (restTime == timeToChill) {
               time += restTime;
               break;
            }
            else {
               restTime -= timeToChill;
               time += timeToChill;
               time += chillTime;
               firstChill = false;
            }
         }
         else {
            time += restTime;
            break;
         }
      }

      return time;
   }
}