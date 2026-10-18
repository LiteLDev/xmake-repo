#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/filters/FilterParamType.h"
#else // @header-generator platform
#endif // @header-generator platform

class FilterInput {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::FilterParamType> mType;
    ::ll::TypedStorage<8, 24, std::string>      mString;
    ::ll::TypedStorage<4, 4, int>               mIValue;
    ::ll::TypedStorage<4, 4, float>             mFValue;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnke0752f;
    ::ll::UntypedStorage<8, 32> mUnk96ba17;
    ::ll::UntypedStorage<4, 4>  mUnk4c9284;
    ::ll::UntypedStorage<4, 4>  mUnk1800e1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FilterInput& operator=(FilterInput const&);
    FilterInput(FilterInput const&);
#endif // @header-generator platform
    FilterInput();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FilterInput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
