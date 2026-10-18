#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class DimensionManager;
class Mob;
class StrictEntityContext;
struct ActorUniqueID;
// clang-format on

class ActorFetcher {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mDimensionManager;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager const> const> mDimensionManager;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorFetcher();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ActorFetcher(::gsl::not_null<Bedrock::NonOwnerPointer<const DimensionManager>>);
#else // @header-generator platform
    MCAPI ::Actor* fetchActorAllDimensions(::ActorUniqueID actorId, bool getRemoved) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* fetchActorAllDimensions(::ActorUniqueID, bool) const;
#else // @header-generator platform
    MCAPI ::Mob* fetchMobAllDimensions(::ActorUniqueID mobId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Mob* fetchMobAllDimensions(::ActorUniqueID) const;

    MCNAPI ::StrictEntityContext fetchStrictActorAllDimensions(::ActorUniqueID, bool) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<const DimensionManager>>);
#else // @header-generator platform
    MCAPI ::StrictEntityContext fetchStrictActorAllDimensions(::ActorUniqueID actorId, bool getRemoved) const;
#endif // @header-generator platform
    // NOLINTEND
};
