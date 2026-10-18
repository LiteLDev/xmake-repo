#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition::EncryptionVariants {

#if defined(LL_PLAT_A) // @header-generator platform
struct KeyPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> privateKey;
    ::ll::TypedStorage<8, 24, std::string> publicKey;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& signature();
    // NOLINTEND
};
#else // @header-generator platform
struct KeyPair {};
#endif // @header-generator platform

} // namespace dragon::materials::definition::EncryptionVariants
