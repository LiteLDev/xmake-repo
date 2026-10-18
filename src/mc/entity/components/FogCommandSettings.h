#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogCommandSettings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mFogIdentifier;
    ::ll::TypedStorage<8, 24, std::string> mUserProvidedId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkfc971f;
    ::ll::UntypedStorage<8, 32> mUnk8ee9a7;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FogCommandSettings& operator=(FogCommandSettings const&);
    FogCommandSettings(FogCommandSettings const&);
    FogCommandSettings();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FogCommandSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
