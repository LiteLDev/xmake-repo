#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TermEvaluationType : int {
    Constant                          = 0,
    ProductOfVariablesAndFactor       = 1,
    ProductOfVariablesFactorAndLambda = 2,
    Lambda                            = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TermEvaluationType : int {
    Constant                          = 0,
    ProductOfVariablesAndFactor       = 1,
    ProductOfVariablesFactorAndLambda = 2,
    Lambda                            = 3,
};
#else // @header-generator platform
enum class TermEvaluationType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
