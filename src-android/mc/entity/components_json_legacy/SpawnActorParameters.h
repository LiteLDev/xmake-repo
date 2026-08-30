#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/item/ItemDescriptor.h"

struct SpawnActorParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mSpawnTimeMin;
    ::ll::TypedStorage<4, 4, int>                                    mSpawnTimeMax;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSpawnSound;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                      mItemDescriptor;
    ::ll::TypedStorage<8, 24, std::string>                           mEntityDefinition;
    ::ll::TypedStorage<8, 24, std::string>                           mSpawnMethod;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>              mOnItemSpawnEvent;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                    mFilters;
    ::ll::TypedStorage<1, 1, bool>                                   mSingleUse;
    ::ll::TypedStorage<1, 1, bool>                                   mShouldLeash;
    ::ll::TypedStorage<4, 4, int>                                    mNumToSpawn;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnActorParameters& operator=(SpawnActorParameters const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnActorParameters(::SpawnActorParameters const&);

    MCNAPI void setItem(::ItemDescriptor const&);

    MCNAPI void setSpawnEntity(std::string const&);

    MCNAPI void setSpawnEvent(std::string const&);

    MCNAPI void setSpawnSound(std::string const&);

    MCNAPI void setSpawnTimeMax(int const&);

    MCNAPI void setSpawnTimeMin(int const&);

    MCNAPI bool spawnsItemStack() const;

    MCNAPI ~SpawnActorParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SpawnActorParameters const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
