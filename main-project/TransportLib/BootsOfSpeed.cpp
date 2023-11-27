#include "BootsOfSpeed.h"

namespace TransportLib {
   BootsOfSpeed::BootsOfSpeed() {
      speed = 6;
      timeToChill = 60;
      chillTime = 10;
   }

   double BootsOfSpeed::getResult(int distance) {
      double restTime;
      double time = (double)distance / (double)speed;

      restTime = time;
      time = 0;

      while (restTime > 0)
      {
         if (firstChill == false && chillTime == 10) {
            chillTime = 5;
         }

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