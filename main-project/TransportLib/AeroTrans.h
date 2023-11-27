#pragma once
#include "GroundTrans.h"

namespace TransportLib {
   class TRANSPORTLIB_API AeroTrans : public Transport {
   protected:
      double index = 0.0;
   };
}