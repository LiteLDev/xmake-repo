#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PacketViolationHandlerSettings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>  mPacketViolationHandlingEnabled;
    ::ll::TypedStorage<4, 4, float> mFinalWarningThreshold;
    ::ll::TypedStorage<4, 4, float> mTerminateConnectionThreshold;
    ::ll::TypedStorage<4, 4, float> mCountToScoreFactor;
    ::ll::TypedStorage<4, 4, float> mPacketViolationScore;
    ::ll::TypedStorage<4, 4, float> mDefaultScore;
    ::ll::TypedStorage<4, 4, float> mMalformedPacketScore;
    ::ll::TypedStorage<4, 4, float> mScoreDropOffDecayRate;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnka187ce;
    ::ll::UntypedStorage<4, 4> mUnkc499d7;
    ::ll::UntypedStorage<4, 4> mUnkd32c81;
    ::ll::UntypedStorage<4, 4> mUnk9db7b0;
    ::ll::UntypedStorage<4, 4> mUnkd6d147;
    ::ll::UntypedStorage<4, 4> mUnkd9b178;
    ::ll::UntypedStorage<4, 4> mUnkc54a26;
    ::ll::UntypedStorage<4, 4> mUnke25835;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PacketViolationHandlerSettings& operator=(PacketViolationHandlerSettings const&);
    PacketViolationHandlerSettings(PacketViolationHandlerSettings const&);
    PacketViolationHandlerSettings();
#endif // @header-generator platform
};
