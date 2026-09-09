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
    ::ll::UntypedStorage<8, 24> mDimensionManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorFetcher();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ActorFetcher(::gsl::not_null<Bedrock::NonOwnerPointer<const DimensionManager>>);

    MCNAPI ::Actor* fetchActorAllDimensions(::ActorUniqueID, bool) const;

    MCNAPI ::Mob* fetchMobAllDimensions(::ActorUniqueID) const;

    MCNAPI ::StrictEntityContext fetchStrictActorAllDimensions(::ActorUniqueID, bool) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<const DimensionManager>>);
    // NOLINTEND
};
