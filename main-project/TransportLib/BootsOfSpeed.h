#pragma once
#include "GroundTrans.h"

namespace TransportLib {
   class TRANSPORTLIB_API BootsOfSpeed : public GroundTrans {
   public:
      BootsOfSpeed();
      double getResult(int distance) override;
   };
}