#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExperienceRewardComponent;
class Mob;
struct AABBShapeComponent;
struct OffsetsComponent;
struct SpawnOnDeathComponent;
struct StateVectorComponent;
// clang-format on

class MobDeathWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    MobDeathWrapper& operator=(MobDeathWrapper const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MobDeathWrapper(::Mob&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND
};
