#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/SpawnData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SpawnData;
#endif // @header-generator platform
// clang-format on

class BaseMobSpawner {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                           mSpawnDelay;
    ::ll::TypedStorage<4, 4, float>                         mSpin;
    ::ll::TypedStorage<4, 4, float>                         mOSpin;
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mActorDefId;
    ::ll::TypedStorage<8, 24, std::vector<SpawnData>>       mSpawnPotentials;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SpawnData>>    mNextSpawnData;
    ::ll::TypedStorage<4, 4, int>                           mMinSpawnDelay;
    ::ll::TypedStorage<4, 4, int>                           mMaxSpawnDelay;
    ::ll::UntypedStorage<4, 8>                              mSpawnCount;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>              mDisplayEntity;
    ::ll::TypedStorage<4, 4, int>                           mMaxNearbyEntities;
    ::ll::TypedStorage<4, 4, int>                           mRequiredPlayerRange;
    ::ll::TypedStorage<4, 4, int>                           mSpawnRange;
    ::ll::TypedStorage<1, 1, bool>                          mActive;
    ::ll::TypedStorage<4, 4, float>                         mDisplayEntityWidth;
    ::ll::TypedStorage<4, 4, float>                         mDisplayEntityHeight;
    ::ll::TypedStorage<4, 4, float>                         mDisplayEntityScale;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                            mSpawnDelay;
    ::ll::TypedStorage<4, 4, float>                          mSpin;
    ::ll::TypedStorage<4, 4, float>                          mOSpin;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>  mActorDefId;
    ::ll::TypedStorage<8, 24, ::std::vector<::SpawnData>>    mSpawnPotentials;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpawnData>> mNextSpawnData;
    ::ll::TypedStorage<4, 4, int>                            mMinSpawnDelay;
    ::ll::TypedStorage<4, 4, int>                            mMaxSpawnDelay;
    ::ll::TypedStorage<4, 4, int>                            mSpawnCount;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>               mDisplayEntity;
    ::ll::TypedStorage<4, 4, int>                            mMaxNearbyEntities;
    ::ll::TypedStorage<4, 4, int>                            mRequiredPlayerRange;
    ::ll::TypedStorage<4, 4, int>                            mSpawnRange;
    ::ll::TypedStorage<1, 1, bool>                           mActive;
    ::ll::TypedStorage<4, 4, float>                          mDisplayEntityWidth;
    ::ll::TypedStorage<4, 4, float>                          mDisplayEntityHeight;
    ::ll::TypedStorage<4, 4, float>                          mDisplayEntityScale;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BaseMobSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseMobSpawner();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual void tick(::BlockSource& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::CompoundTag const&);
#else // @header-generator platform
    virtual void load(::CompoundTag const& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void save(::CompoundTag&);
#else // @header-generator platform
    virtual void save(::CompoundTag& tag);
#endif // @header-generator platform

    virtual ::BlockPos const& getPos() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BaseMobSpawner(::ActorDefinitionIdentifier);
#else // @header-generator platform
    MCAPI explicit BaseMobSpawner(::ActorDefinitionIdentifier actorDefId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _delay(::BlockSource&);
#else // @header-generator platform
    MCAPI void _delay(::BlockSource& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getOSpin() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Actor* createAndAddDisplayEntity(::BlockSource& region);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getSpin() const;
#else // @header-generator platform
    MCAPI void removeDisplayEntity();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void removeDisplayEntity();
#else // @header-generator platform
    MCAPI void setEntityId(::ActorDefinitionIdentifier actorDefId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setEntityId(::ActorDefinitionIdentifier);

    MCNAPI ::Mob* tryGetOrCreateDisplayEntity(::BlockSource&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Mob* tryGetOrCreateDisplayEntity(::BlockSource& region);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionIdentifier);
#else // @header-generator platform
    MCAPI void* $ctor(::ActorDefinitionIdentifier actorDefId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void $load(::CompoundTag const& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $save(::CompoundTag&);
#else // @header-generator platform
    MCAPI void $save(::CompoundTag& tag);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
