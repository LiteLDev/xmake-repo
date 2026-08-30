#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFlags.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
struct ActorDataFlagComponent;
struct SynchedActorDataComponent;
// clang-format on

class SynchedActorDataReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const SynchedActorDataComponent*>> mComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const ActorDataFlagComponent*>>    mFlagComponent;
    // NOLINTEND

public:
    // prevent constructor by default
    SynchedActorDataReader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockPos getPosition(ushort) const;

    MCNAPI bool getStatusFlag(::ActorFlags) const;
    // NOLINTEND
};
