#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#else // @header-generator platform
#endif // @header-generator platform

struct PackMaps {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<PackType, std::string> const> mToString;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, PackType> const> mFromString;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk81712c;
    ::ll::UntypedStorage<8, 64> mUnk73a8f7;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackMaps();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    PackMaps& operator=(PackMaps const&);
    PackMaps(PackMaps const&);
    PackMaps();
#endif // @header-generator platform
};
