#include "Eagle.h"

namespace TransportLib {
   Eagle::Eagle() {
      speed = 8.0;
      index = 0.94;
   }

   double Eagle::getResult(int distance) {
      double origDist = (double)distance;
      double time;

      origDist = distance * index;
      time = origDist / speed;

      return time;
   }
}