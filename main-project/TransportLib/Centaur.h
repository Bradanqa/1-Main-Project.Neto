#pragma once
#include "GroundTrans.h"

namespace TransportLib {
   class TRANSPORTLIB_API Centaur : public GroundTrans {
   public:
      Centaur();
      double getResult(int distance) override;
   };
}