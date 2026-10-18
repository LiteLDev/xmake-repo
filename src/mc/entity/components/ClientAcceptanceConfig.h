#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientAcceptanceConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mCooldownRate;
    ::ll::TypedStorage<4, 4, float> mMaxCooldown;
    ::ll::TypedStorage<4, 4, float> mMaxVerticalAcceptance;
    ::ll::TypedStorage<4, 4, float> mMaxHorizontalAcceptance;
    ::ll::TypedStorage<4, 4, float> mMinAcceptanceEpsilon;
    ::ll::TypedStorage<1, 1, bool>  mUseHorizontalCollisions;
    ::ll::TypedStorage<1, 1, bool>  mUseVerticalCollisions;
    ::ll::TypedStorage<1, 1, bool>  mReplenishCooldownOnAcceptance;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk9d1d71;
    ::ll::UntypedStorage<4, 4> mUnk21be7a;
    ::ll::UntypedStorage<4, 4> mUnkbb2e64;
    ::ll::UntypedStorage<4, 4> mUnkaf2372;
    ::ll::UntypedStorage<4, 4> mUnkf54790;
    ::ll::UntypedStorage<1, 1> mUnk1d5cbd;
    ::ll::UntypedStorage<1, 1> mUnke3275a;
    ::ll::UntypedStorage<1, 1> mUnk99ad9c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ClientAcceptanceConfig& operator=(ClientAcceptanceConfig const&);
    ClientAcceptanceConfig(ClientAcceptanceConfig const&);
    ClientAcceptanceConfig();
#endif // @header-generator platform
};
