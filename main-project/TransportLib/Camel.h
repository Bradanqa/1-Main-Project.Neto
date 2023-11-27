#pragma once
#include "GroundTrans.h"

namespace TransportLib {
   class TRANSPORTLIB_API Camel : public GroundTrans {
   public:
      Camel();
      double getResult(int distance) override;
   };
}