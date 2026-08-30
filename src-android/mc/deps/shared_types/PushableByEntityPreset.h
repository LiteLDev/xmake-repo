#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/PushMode.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::v1_26_40 {

struct PushableByEntityPreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mFilter;
    ::ll::TypedStorage<1, 1, ::SharedTypes::PushMode>                    mPushMode;
    ::ll::TypedStorage<1, 1, bool>                                       mRequireCollisionOverlap;
    ::ll::TypedStorage<4, 4, float>                                      mStrengthMultiplier;
    ::ll::TypedStorage<4, 4, float>                                      mMinDistance;
    ::ll::TypedStorage<4, 4, float>                                      mMaxDistance;
    ::ll::TypedStorage<4, 4, float>                                      mPushScaleSelf;
    ::ll::TypedStorage<4, 4, float>                                      mPushScaleOther;
    ::ll::TypedStorage<4, 4, float>                                      mKickSpeedScale;
    ::ll::TypedStorage<4, 4, float>                                      mMinKickSpeed;
    ::ll::TypedStorage<4, 4, float>                                      mMaxKickSpeed;
    ::ll::TypedStorage<4, 4, float>                                      mVerticalKickMultiplier;
    ::ll::TypedStorage<1, 1, bool>                                       mPlaySound;
    ::ll::TypedStorage<4, 4, float>                                      mPlaySoundCooldownInSeconds;
    ::ll::TypedStorage<4, 4, float>                                      mPlaySoundImpulseThreshold;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
