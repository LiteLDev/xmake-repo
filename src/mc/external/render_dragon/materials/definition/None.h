#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition::EncryptionVariants {

#if defined(LL_PLAT_A) // @header-generator platform
struct None {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& signature();
    // NOLINTEND
};
#else // @header-generator platform
struct None {};
#endif // @header-generator platform

} // namespace dragon::materials::definition::EncryptionVariants
