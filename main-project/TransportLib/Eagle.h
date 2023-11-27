#pragma once
#include "AeroTrans.h"

namespace TransportLib {
   class TRANSPORTLIB_API Eagle : public AeroTrans {
   public:
      Eagle();
      double getResult(int distance) override;
   };
}