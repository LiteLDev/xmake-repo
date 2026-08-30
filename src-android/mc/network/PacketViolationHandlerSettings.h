#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PacketViolationHandlerSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mPacketViolationHandlingEnabled;
    ::ll::TypedStorage<4, 4, float> mFinalWarningThreshold;
    ::ll::TypedStorage<4, 4, float> mTerminateConnectionThreshold;
    ::ll::TypedStorage<4, 4, float> mCountToScoreFactor;
    ::ll::TypedStorage<4, 4, float> mPacketViolationScore;
    ::ll::TypedStorage<4, 4, float> mDefaultScore;
    ::ll::TypedStorage<4, 4, float> mMalformedPacketScore;
    ::ll::TypedStorage<4, 4, float> mScoreDropOffDecayRate;
    // NOLINTEND
};
