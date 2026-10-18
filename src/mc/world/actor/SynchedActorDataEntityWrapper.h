#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/actor/DataItem.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorFlags.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class DataItem;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class SynchedActorData;
class SynchedActorDataReader;
class SynchedActorDataWriter;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct SynchedActorDataComponent;
// clang-format on

class SynchedActorDataEntityWrapper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<SynchedActorDataComponent*>>    mData;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ActorDataFlagComponent*>>       mFlagData;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ActorDataDirtyFlagsComponent*>> mDirtyFlags;
    ::ll::UntypedStorage<1, 24>                                              mEntityContext;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::SynchedActorDataComponent*>>    mData;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorDataFlagComponent*>>       mFlagData;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorDataDirtyFlagsComponent*>> mDirtyFlags;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                      mEntityContext;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    template <class T>
    MCAPI void set(ushort id, T const& value);

public:
#endif // @header-generator platform
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    SynchedActorDataEntityWrapper(SynchedActorDataEntityWrapper const&);
#else // @header-generator platform
#endif // @header-generator platform
    SynchedActorDataEntityWrapper();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SynchedActorDataEntityWrapper(::EntityContext&);
#else // @header-generator platform
    MCAPI explicit SynchedActorDataEntityWrapper(::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<SynchedActorData*> _get();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void assignValues(
        ::std::vector<::std::unique_ptr<::DataItem>> const& items,
        ::Actor&                                            actor,
        ::std::optional<uint64>                             targetFrame
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<const SynchedActorData*> _get() const;
#else // @header-generator platform
    MCAPI float getFloat(ushort id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void assignValues(std::vector<std::unique_ptr<DataItem>> const&, ::Actor&, std::optional<ulong>);
#else // @header-generator platform
    MCAPI int getInt(ushort id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag const& getCompoundTag(ushort) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI int64 getInt64(ushort id) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getFloat(ushort) const;
#else // @header-generator platform
    MCAPI schar getInt8(ushort id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getInt(ushort) const;
#else // @header-generator platform
    MCAPI ::BlockPos getPosition(ushort id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long getInt64(ushort) const;
#else // @header-generator platform
    MCAPI short getShort(ushort id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI schar getInt8(ushort) const;
#else // @header-generator platform
    MCAPI ::std::string const& getString(ushort id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos getPosition(ushort) const;
#else // @header-generator platform
    MCAPI ::Vec3 getVec3(ushort id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short getShort(ushort) const;
#else // @header-generator platform
    MCAPI bool hasData(ushort id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void markDirty(ushort id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::EntityContext& entity);
#endif // @header-generator platform
    // NOLINTEND
};
