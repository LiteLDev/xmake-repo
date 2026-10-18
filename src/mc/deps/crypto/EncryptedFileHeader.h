#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto {

union EncryptedFileHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 256> _data;
    ::ll::UntypedStorage<4, 256> _efheader;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 256> mUnkdeb916;
    ::ll::UntypedStorage<4, 256> mUnkdb5ed2;
#endif // @header-generator platform
    // NOLINTEND
};
} // namespace Crypto
