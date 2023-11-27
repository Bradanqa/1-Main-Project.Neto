#pragma once
#ifndef TRANSPORTLIB_EXPORTS
#define TRANSPORTLIB_API __declspec(dllexport)
#else
#define TRANSPORTLIB_API __declspec(dllexport)
#endif

namespace TransportLib {
   class TRANSPORTLIB_API Transport {
   protected:
   public:
      Transport();
      virtual double getResult(int distance) = 0;

   protected:
      double speed;
   };
}