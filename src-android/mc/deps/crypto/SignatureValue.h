#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto {

union SignatureValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>         _value;
    ::ll::TypedStorage<1, 4, uchar[4]> _signatureBytes;
    // NOLINTEND
};
} // namespace Crypto
