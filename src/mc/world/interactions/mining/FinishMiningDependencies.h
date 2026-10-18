#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Interactions { class IActorEventCoordinatorDependencies; }
namespace Interactions { class ILegacyActorDependencies; }
namespace Interactions::Mining { class ILegacyDependencies; }
namespace Interactions::Mining { class IMinecraftApiDependencies; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Interactions::Mining {

struct FinishMiningDependencies {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Interactions::Mining::ILegacyDependencies&>        mLegacyDependencies;
    ::ll::TypedStorage<8, 8, ::Interactions::Mining::IMinecraftApiDependencies&>  mMinecraftApiDependencies;
    ::ll::TypedStorage<8, 8, ::Interactions::IActorEventCoordinatorDependencies&> mActorEventCoordinator;
    ::ll::TypedStorage<8, 8, ::Interactions::ILegacyActorDependencies&>           mLegacyActor;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkc030e8;
    ::ll::UntypedStorage<8, 8> mUnk3b0a1d;
    ::ll::UntypedStorage<8, 8> mUnk53d140;
    ::ll::UntypedStorage<8, 8> mUnk361ff4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FinishMiningDependencies& operator=(FinishMiningDependencies const&);
    FinishMiningDependencies(FinishMiningDependencies const&);
    FinishMiningDependencies();
};

} // namespace Interactions::Mining
