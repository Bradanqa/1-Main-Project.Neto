#include "Broom.h"

namespace TransportLib {
   Broom::Broom() {
      speed = 20;
      index = 0;
   }

   double Broom::getResult(int distance) {
      double origDist = distance;
      double tempDistance = 0;
      double time;
      int tempIndex = distance / 1000;

      if (distance < 1000) {
         index = 1.0;
      }
      else {
         index = tempIndex;
         tempDistance = ((double)distance * index) / 100;
      }

      origDist = (double)distance - tempDistance;
      time = origDist / speed;

      return time;
   }
}