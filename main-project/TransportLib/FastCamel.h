#pragma once
#include "Camel.h"

namespace TransportLib {
   class TRANSPORTLIB_API FastCamel : public Camel {
   public:
      FastCamel();
      double getResult(int distance) override;
   };
}