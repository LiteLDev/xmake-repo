#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"

namespace ItemStackRequestCereal {

struct MolangItemDescriptorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>    mTagExpression;
    ::ll::TypedStorage<2, 2, ::MolangVersion> mMolangVersion;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
