#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseAttributeMap;
#if defined(LL_PLAT_A) // @header-generator platform
struct MutableAttributeWithContext;
struct ValidMutableAttributeWithContext;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct AttributeModificationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseAttributeMap*> mAttributeMap;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::AttributeModificationContext createNoUpdateContext();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
