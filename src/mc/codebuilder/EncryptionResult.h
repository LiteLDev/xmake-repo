#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EncryptionResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> requestId;
    ::ll::TypedStorage<8, 24, std::string> publicKey;
    ::ll::TypedStorage<8, 24, std::string> error;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk25765c;
    ::ll::UntypedStorage<8, 32> mUnkb6f67f;
    ::ll::UntypedStorage<8, 32> mUnke45cf2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EncryptionResult& operator=(EncryptionResult const&);
    EncryptionResult(EncryptionResult const&);
    EncryptionResult();
#endif // @header-generator platform
};

} // namespace CodeBuilder
