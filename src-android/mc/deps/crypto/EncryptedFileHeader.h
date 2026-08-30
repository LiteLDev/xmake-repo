#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto {

union EncryptedFileHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 256> _data;
    ::ll::UntypedStorage<4, 256> _efheader;
    // NOLINTEND
};
} // namespace Crypto
