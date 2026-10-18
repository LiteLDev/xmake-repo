#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto {

union SignatureValue {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 4>         _value;
    ::ll::TypedStorage<1, 4, uchar[4]> _signatureBytes;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 4> mUnk5f3ace;
    ::ll::UntypedStorage<4, 4> mUnkb308f4;
#endif // @header-generator platform
    // NOLINTEND
};
} // namespace Crypto
