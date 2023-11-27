#include "Camel.h"

namespace TransportLib {
   Camel::Camel() {
      speed = 10;
      timeToChill = 30;
      chillTime = 5;
   }

   double Camel::getResult(int distance) {
      double restTime;
      double time = (double)distance / (double)speed;

      restTime = time;
      time = 0;

      while (restTime > 0)
      {
         if (firstChill == false && chillTime == 5) {
            chillTime = 6.5;
         }
         if (chillTime == 6.5) {
            chillTime = 8;
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