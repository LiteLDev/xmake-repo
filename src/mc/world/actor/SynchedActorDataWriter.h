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
class SynchedActorData;
class SynchedActorDataReader;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct SynchedActorDataComponent;
// clang-format on

class SynchedActorDataWriter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<SynchedActorDataComponent*>>    mComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ActorDataFlagComponent*>>       mFlagComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ActorDataDirtyFlagsComponent*>> mDirtyFlagsComponent;
    // NOLINTEND

public:
    // prevent constructor by default
    SynchedActorDataWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::gsl::not_null<SynchedActorData*> _get();

    MCNAPI ::SynchedActorDataReader reader() const;

    MCNAPI void setStatusFlag(::ActorFlags, bool);
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::SynchedActorDataComponent*>>    mComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorDataFlagComponent*>>       mFlagComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorDataDirtyFlagsComponent*>> mDirtyFlagsComponent;
#endif // @header-generator platform
    // NOLINTEND
};
