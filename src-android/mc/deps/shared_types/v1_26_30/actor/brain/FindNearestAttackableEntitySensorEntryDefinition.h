#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/WorldBlockPosition.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_26_0/actor/brain/BaseSensorEntryDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Brain { struct EntityRefMemory; }
// clang-format on

namespace SharedTypes::v1_26_30::Brain::MemorySensors {

struct FindNearestAttackableEntitySensorEntryDefinition
: public ::SharedTypes::v1_26_0::Brain::BaseSensorEntryDefinition<
      SharedTypes::v1_26_30::Brain::MemorySensors::FindNearestAttackableEntitySensorEntryDefinition> {
public:
    // FindNearestAttackableEntitySensorEntryDefinition inner types define
    using FilterGroupData = ::SharedTypes::v1_21_20::FilterGroupData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                                          mFoundEntityMemory;
    ::ll::UntypedStorage<8, 48>                                          mSearchPosMemory;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mTargetFilters;
    ::ll::TypedStorage<4, 12, ::Vec3>                                    mSensingRange;
    ::ll::TypedStorage<1, 1, bool>                                       mCanSwitchTargets;
    ::ll::TypedStorage<1, 1, bool>                                       mCanTargetOwner;
    ::ll::TypedStorage<1, 1, bool>                                       mCanTargetInvisible;
    ::ll::TypedStorage<1, 1, bool>                                       mCanTargetPlayingDead;
    ::ll::TypedStorage<1, 1, bool>                                       mCanIgnoreTargetDisguises;
    ::ll::TypedStorage<1, 1, bool>                                       mCanIgnoreLineOfSight;
    ::ll::TypedStorage<1, 1, bool>                                       mCanIgnoreSunlight;
    ::ll::TypedStorage<1, 1, bool>                                       mRequireUnobstructedPath;
    ::ll::TypedStorage<4, 4, float>                                      mSecondsBeforeForgettingLostTarget;
    ::ll::TypedStorage<4, 4, float>                                      mTargetSneakingVisibilityMultiplier;
    ::ll::TypedStorage<4, 4, float>                                      mTargetInvisibleVisibilityMultiplier;
    ::ll::TypedStorage<4, 4, float>                                      mPlayerDisguisedVisibilityMultiplier;
    ::ll::TypedStorage<4, 4, float>                                      mSensingFOVDegrees;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30::Brain::MemorySensors
