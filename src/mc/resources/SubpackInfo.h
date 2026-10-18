#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/HardwareMemoryTier.h"
#else // @header-generator platform
#endif // @header-generator platform

struct SubpackInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>         mFolderName;
    ::ll::TypedStorage<8, 24, std::string>         mName;
    ::ll::TypedStorage<1, 1, ::HardwareMemoryTier> mMemoryTier;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk3084c6;
    ::ll::UntypedStorage<8, 32> mUnk939ca8;
    ::ll::UntypedStorage<1, 1>  mUnk548b8a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SubpackInfo& operator=(SubpackInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SubpackInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SubpackInfo(::SubpackInfo&&);
#else // @header-generator platform
    MCNAPI SubpackInfo(::SubpackInfo const&);
#endif // @header-generator platform

    MCNAPI ~SubpackInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SubpackInfo&&);
#else // @header-generator platform
    MCNAPI void* $ctor(::SubpackInfo const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
