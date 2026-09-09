#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/actor/ActorFlags.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class DataItem;
class EntityContext;
class SynchedActorData;
class SynchedActorDataReader;
class SynchedActorDataWriter;
class Vec3;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct SynchedActorDataComponent;
// clang-format on

class SynchedActorDataEntityWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<SynchedActorDataComponent*>>    mData;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ActorDataFlagComponent*>>       mFlagData;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ActorDataDirtyFlagsComponent*>> mDirtyFlags;
    ::ll::UntypedStorage<1, 24>                                              mEntityContext;
    // NOLINTEND

public:
    // prevent constructor by default
    SynchedActorDataEntityWrapper(SynchedActorDataEntityWrapper const&);
    SynchedActorDataEntityWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SynchedActorDataEntityWrapper(::EntityContext&);

    MCNAPI ::gsl::not_null<SynchedActorData*> _get();

    MCNAPI ::gsl::not_null<const SynchedActorData*> _get() const;

    MCNAPI void assignValues(std::vector<std::unique_ptr<DataItem>> const&, ::Actor&, std::optional<ulong>);

    MCNAPI ::CompoundTag const& getCompoundTag(ushort) const;

    MCNAPI float getFloat(ushort) const;

    MCNAPI int getInt(ushort) const;

    MCNAPI long getInt64(ushort) const;

    MCNAPI schar getInt8(ushort) const;

    MCNAPI ::BlockPos getPosition(ushort) const;

    MCNAPI short getShort(ushort) const;

    MCNAPI std::string const& getString(ushort) const;

    MCNAPI ::Vec3 getVec3(ushort) const;

    MCNAPI bool hasData(ushort) const;

    MCNAPI bool isDirty() const;

    MCNAPI void markDirty(ushort);

    MCNAPI std::vector<std::unique_ptr<DataItem>> packAll() const;

    MCNAPI std::vector<std::unique_ptr<DataItem>> packDirty();

    MCNAPI void queueAssignment(std::vector<std::unique_ptr<DataItem>> const&, ::Actor&, std::optional<ulong>);

    MCNAPI ::SynchedActorDataReader reader() const;

    MCNAPI ::SynchedActorDataWriter writer();

    MCNAPI ~SynchedActorDataEntityWrapper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
