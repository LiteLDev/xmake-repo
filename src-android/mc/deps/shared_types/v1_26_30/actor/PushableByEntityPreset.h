#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/PushMode.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct PushableByEntityPreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mFilter;
    ::ll::TypedStorage<1, 1, ::SharedTypes::PushMode>                    mPushMode;
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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_26_30::PushableByEntityPreset const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& FILTER_DESCRIPTION();

    MCNAPI static std::string_view const& KICK_SPEED_SCALE_DESCRIPTION();

    MCNAPI static std::string_view const& MAX_DISTANCE_DESCRIPTION();

    MCNAPI static std::string_view const& MAX_KICK_SPEED_DESCRIPTION();

    MCNAPI static std::string_view const& MIN_DISTANCE_DESCRIPTION();

    MCNAPI static std::string_view const& MIN_KICK_SPEED_DESCRIPTION();

    MCNAPI static std::string_view const& PLAY_SOUND_COOLDOWN_IN_SECONDS_DESCRIPTION();

    MCNAPI static std::string_view const& PLAY_SOUND_DESCRIPTION();

    MCNAPI static std::string_view const& PLAY_SOUND_IMPULSE_THRESHOLD_DESCRIPTION();

    MCNAPI static std::string_view const& PUSH_MODE_DESCRIPTION();

    MCNAPI static std::string_view const& PUSH_SCALE_OTHER_DESCRIPTION();

    MCNAPI static std::string_view const& PUSH_SCALE_SELF_DESCRIPTION();

    MCNAPI static std::string_view const& STRENGTH_MULTIPLIER_DESCRIPTION();

    MCNAPI static std::string_view const& VERTICAL_KICK_MULTIPLIER_DESCRIPTION();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
