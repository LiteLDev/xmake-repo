#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/PushMode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/Tick.h"

struct PushablePreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>     mFilter;
    ::ll::TypedStorage<1, 1, ::SharedTypes::PushMode> mPushMode;
    ::ll::TypedStorage<4, 4, float>                   mStrengthMultiplier;
    ::ll::TypedStorage<4, 4, float>                   mMinDistance;
    ::ll::TypedStorage<4, 4, float>                   mMaxDistance;
    ::ll::TypedStorage<1, 1, bool>                    mRequireCollisionOverlap;
    ::ll::TypedStorage<4, 4, float>                   mPushScaleSelf;
    ::ll::TypedStorage<4, 4, float>                   mPushScaleOther;
    ::ll::TypedStorage<4, 4, float>                   mKickSpeedScale;
    ::ll::TypedStorage<4, 4, float>                   mMinKickSpeed;
    ::ll::TypedStorage<4, 4, float>                   mMaxKickSpeed;
    ::ll::TypedStorage<4, 4, float>                   mVerticalKickMultiplier;
    ::ll::TypedStorage<1, 1, bool>                    mPlaySound;
    ::ll::TypedStorage<8, 8, ::Tick>                  mPlaySoundCooldownInTicks;
    ::ll::TypedStorage<4, 4, float>                   mPlaySoundImpulseThreshold;
    // NOLINTEND

public:
    // prevent constructor by default
    PushablePreset& operator=(PushablePreset const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PushablePreset();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
