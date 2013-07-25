#ifndef __sim_coef__
#define __sim_coef__

#include "base_c/defs.h"

class SimCoef
{
public:
   SimCoef()
   {
   }

   virtual double calcCoef( const byte *f1, const byte *f2, int f1_bit_count, int f2_bit_count ) = 0;

   virtual double calcUpperBound( int f1_bit_count, int min_f2_bit_count, int max_f2_bit_count, int min_dist ) = 0;

   virtual double calcUpperBound( int f1_bit_count, int min_f2_bit_count, int max_f2_bit_count ) = 0;

   virtual double calcUpperBound1( int f1_bit_count, int min_f2_bit_count, int max_f2_bit_count, 
                                  int m10, int m01 ) = 0;
};

#endif /* __sim_coef__ */
