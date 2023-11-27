#pragma once
#include "Transport.h"

namespace TransportLib {

   class TRANSPORTLIB_API GroundTrans : public Transport {
   protected:
      double chillTime = 0.0;
      double timeToChill = 0.0;
      bool firstChill = true;
   };
}