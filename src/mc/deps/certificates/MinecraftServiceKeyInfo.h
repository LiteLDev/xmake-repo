#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/WebKey.h"
#else // @header-generator platform
#endif // @header-generator platform

struct MinecraftServiceKeyInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, WebKey>> TrustedKeys;
    ::ll::TypedStorage<8, 24, std::string>                             Issuer;
    ::ll::TypedStorage<8, 8, long>                                     RoughTimeCorrectionSeconds;
    ::ll::TypedStorage<1, 1, bool>                                     NewlyFetched;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnka8d15e;
    ::ll::UntypedStorage<8, 32> mUnk8f5a62;
    ::ll::UntypedStorage<8, 8>  mUnkdf1e25;
    ::ll::UntypedStorage<1, 1>  mUnk3f3d2a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftServiceKeyInfo& operator=(MinecraftServiceKeyInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MinecraftServiceKeyInfo(MinecraftServiceKeyInfo const&);
    MinecraftServiceKeyInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinecraftServiceKeyInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
