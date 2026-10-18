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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                           mEntityDefinition;
    ::ll::TypedStorage<8, 24, std::string>                           mSpawnMethod;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>              mOnItemSpawnEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                         mEntityDefinition;
    ::ll::TypedStorage<8, 32, ::std::string>                         mSpawnMethod;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mOnItemSpawnEvent;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                    mFilters;
    ::ll::TypedStorage<1, 1, bool>                                   mSingleUse;
    ::ll::TypedStorage<1, 1, bool>                                   mShouldLeash;
    ::ll::TypedStorage<4, 4, int>                                    mNumToSpawn;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnActorParameters& operator=(SpawnActorParameters const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SpawnActorParameters();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SpawnActorParameters(::SpawnActorParameters const&);
#else // @header-generator platform
    MCAPI SpawnActorParameters(::SpawnActorParameters&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setItem(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI SpawnActorParameters(::SpawnActorParameters const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setSpawnEntity(std::string const&);
#else // @header-generator platform
    MCAPI void setItem(::ItemDescriptor const& itemDescriptor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setSpawnEvent(std::string const&);
#else // @header-generator platform
    MCAPI void setSpawnEntity(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setSpawnSound(std::string const&);
#else // @header-generator platform
    MCAPI void setSpawnEvent(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setSpawnTimeMax(int const&);
#else // @header-generator platform
    MCAPI void setSpawnSound(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setSpawnTimeMin(int const&);
#else // @header-generator platform
    MCAPI void setSpawnTimeMax(int const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool spawnsItemStack() const;
#else // @header-generator platform
    MCAPI void setSpawnTimeMin(int const& value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SpawnActorParameters();
#else // @header-generator platform
    MCAPI ~SpawnActorParameters();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SpawnActorParameters const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SpawnActorParameters&&);

    MCAPI void* $ctor(::SpawnActorParameters const&);
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
};
