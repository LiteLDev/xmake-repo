#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorFilterGroup.h"

struct ShooterProjectileData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mActorDef;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mActorDef;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                           mAuxValue;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>           mFilter;
    ::ll::TypedStorage<4, 4, float>                         mChance;
    ::ll::TypedStorage<1, 1, bool>                          mUnselectTarget;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setActorDefByName(std::string const&);

    MCNAPI ~ShooterProjectileData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void setActorDefByName(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND
};
