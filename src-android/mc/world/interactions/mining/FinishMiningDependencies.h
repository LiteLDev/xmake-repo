#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Interactions { class IActorEventCoordinatorDependencies; }
namespace Interactions { class ILegacyActorDependencies; }
namespace Interactions::Mining { class ILegacyDependencies; }
namespace Interactions::Mining { class IMinecraftApiDependencies; }
// clang-format on

namespace Interactions::Mining {

struct FinishMiningDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Interactions::Mining::ILegacyDependencies&>        mLegacyDependencies;
    ::ll::TypedStorage<8, 8, ::Interactions::Mining::IMinecraftApiDependencies&>  mMinecraftApiDependencies;
    ::ll::TypedStorage<8, 8, ::Interactions::IActorEventCoordinatorDependencies&> mActorEventCoordinator;
    ::ll::TypedStorage<8, 8, ::Interactions::ILegacyActorDependencies&>           mLegacyActor;
    // NOLINTEND

public:
    // prevent constructor by default
    FinishMiningDependencies& operator=(FinishMiningDependencies const&);
    FinishMiningDependencies(FinishMiningDependencies const&);
    FinishMiningDependencies();
};

} // namespace Interactions::Mining
