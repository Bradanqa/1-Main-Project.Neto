#include "FlyCarpet.h"

namespace TransportLib {
   FlyCarpet::FlyCarpet() {
      speed = 10;
      index = 0;
   }

   double FlyCarpet::getResult(int distance) {
      double origDist = distance;
      double time;

      if (distance < 1000) {
         index = 1.0;
      }
      else if (distance >= 1000 && distance < 5000) {
         index = 0.97;
      }
      else if (distance >= 5000 && distance < 10000) {
         index = 0.9;
      }
      else {
         index = 0.95;
      }

      origDist = (double)distance * index;
      time = origDist / speed;

      return time;
   }
}