#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecraftServiceKeysMetadata {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> Endpoint;
    ::ll::TypedStorage<8, 24, std::string> Issuer;
    ::ll::TypedStorage<8, 8, long>         ServiceTime;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnke05b24;
    ::ll::UntypedStorage<8, 32> mUnk7b2dd5;
    ::ll::UntypedStorage<8, 8>  mUnkdc0a6b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftServiceKeysMetadata& operator=(MinecraftServiceKeysMetadata const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinecraftServiceKeysMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    MinecraftServiceKeysMetadata(MinecraftServiceKeysMetadata const&);
    MinecraftServiceKeysMetadata();
#endif // @header-generator platform
};
