#pragma once
#include "AeroTrans.h"


namespace TransportLib {
   class TRANSPORTLIB_API Broom : public AeroTrans {
   public:
      Broom();
      double getResult(int distance) override;
   };
}