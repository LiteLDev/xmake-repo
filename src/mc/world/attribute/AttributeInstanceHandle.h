#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class AttributeInstanceConstRef;
class AttributeInstanceRef;
class BaseAttributeMap;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class AttributeInstanceHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mAttributeID;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::AttributeInstanceConstRef getInstance(::BaseAttributeMap const&) const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
