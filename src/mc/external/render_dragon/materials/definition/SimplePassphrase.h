#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition::EncryptionVariants {

#if defined(LL_PLAT_A) // @header-generator platform
struct SimplePassphrase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> passphrase;
    // NOLINTEND

public:
    // prevent constructor by default
    SimplePassphrase& operator=(SimplePassphrase const&);
    SimplePassphrase();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& signature();
    // NOLINTEND
};
#else // @header-generator platform
struct SimplePassphrase {};
#endif // @header-generator platform

} // namespace dragon::materials::definition::EncryptionVariants
