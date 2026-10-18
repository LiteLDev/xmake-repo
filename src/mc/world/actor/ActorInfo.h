#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct ActorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                          mRuntimeId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mIdentifier;
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mBaseIdentifier;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mIdentifier;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mBaseIdentifier;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                          mHasSpawnEgg;
    ::ll::TypedStorage<1, 1, bool>                          mIsSummonable;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<int>>            mExperimentIndex;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<int>>          mExperimentIndex;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void load(::CompoundTag const*);
#else // @header-generator platform
    MCAPI ActorInfo();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> save() const;
#else // @header-generator platform
    MCAPI void load(::CompoundTag const* tag);

    MCAPI ::std::unique_ptr<::CompoundTag> save() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};
