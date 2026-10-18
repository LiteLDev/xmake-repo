#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20 {

#if defined(LL_PLAT_A) // @header-generator platform
enum IntProviderType : uint {
#else // @header-generator platform
enum class IntProviderType : int {
#endif // @header-generator platform
    Constant = 0,
    Uniform  = 1,
};

}
