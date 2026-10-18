#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#else // @header-generator platform
#endif // @header-generator platform

struct DynamicPropertyDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::optional<std::variant<double, float, bool, std::string, Vec3>>> mDefaultValue;
    ::ll::TypedStorage<8, 32, std::variant<double, float, bool, std::string, Vec3>>                mTypeValue;
    ::ll::TypedStorage<8, 8, ulong>                                                                mMaxStringLength;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnk41c576;
    ::ll::UntypedStorage<8, 40> mUnk5ad3fb;
    ::ll::UntypedStorage<8, 8>  mUnk1b77f8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DynamicPropertyDefinition& operator=(DynamicPropertyDefinition const&);
    DynamicPropertyDefinition(DynamicPropertyDefinition const&);
#endif // @header-generator platform
    DynamicPropertyDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DynamicPropertyDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
