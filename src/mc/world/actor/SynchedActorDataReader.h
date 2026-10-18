#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/ActorFlags.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorDataFlagComponent;
struct SynchedActorDataComponent;
// clang-format on

class SynchedActorDataReader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::SynchedActorDataComponent const*>> mComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorDataFlagComponent const*>>    mFlagComponent;
#endif // @header-generator platform
    // NOLINTEND
};
