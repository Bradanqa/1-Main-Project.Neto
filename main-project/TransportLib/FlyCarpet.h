#pragma once
#include "AeroTrans.h"

namespace TransportLib {
   class TRANSPORTLIB_API FlyCarpet : public AeroTrans {
   public:
      FlyCarpet();
      double getResult(int distance) override;
   };
}