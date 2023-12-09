#include "FastCamel.h"

namespace TransportLib {
   FastCamel::FastCamel() {
      speed = 40;
      timeToChill = 10;
      chillTime = 5;
   }

   double FastCamel::getResult(int distance) {
      double restTime;
      double time = (double)distance / (double)speed;

      restTime = time;
      time = 0;

      while (restTime > 0)
      {
         if (firstChill == false && chillTime == 5) {
            chillTime = 6.5;
         }
         if (secondChill == false && chillTime == 6.5) {
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
               if (firstChill == false) {
                  secondChill = false;
               }
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