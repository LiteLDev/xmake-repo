#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct TrimMaterial {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mMaterialId;
    ::ll::TypedStorage<8, 24, std::string>    mColor;
    ::ll::TypedStorage<8, 40, ::HashedString> mItemName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mMaterialId;
    ::ll::TypedStorage<8, 32, ::std::string>  mColor;
    ::ll::TypedStorage<8, 48, ::HashedString> mItemName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TrimMaterial& operator=(TrimMaterial const&);
    TrimMaterial();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~TrimMaterial();
#else // @header-generator platform
    MCAPI TrimMaterial(::TrimMaterial const&);

    MCAPI ~TrimMaterial();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TrimMaterial const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
