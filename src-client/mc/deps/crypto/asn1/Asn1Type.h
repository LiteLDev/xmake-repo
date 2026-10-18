#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asn1 {

enum class Asn1Type : int {
    Invalid     = 0,
    Set         = 1,
    Sequence    = 2,
    Int         = 3,
    OctetString = 4,
    UTF8String  = 5,
    IA5String   = 6,
};

}
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
