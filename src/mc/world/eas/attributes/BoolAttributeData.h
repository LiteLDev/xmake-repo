#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/eas/attributes/modifiers/BoolAttributeOperation.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace EAS {

struct BoolAttributeData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                          mValue;
    ::ll::TypedStorage<4, 4, ::EAS::BoolAttributeOperation> mOperation;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk53dd00;
    ::ll::UntypedStorage<4, 4> mUnk71d85e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BoolAttributeData& operator=(BoolAttributeData const&);
    BoolAttributeData(BoolAttributeData const&);
    BoolAttributeData();
#endif // @header-generator platform
};

} // namespace EAS
