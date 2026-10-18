#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct IllagerBeastFlagComponent;
struct InterpolateMovementNeededComponent;
struct StateVectorComponent;
struct SubBBsComponent;
struct TickingSystemWithInfo;
// clang-format on

class IllagerBeastPostAIStepSystem {
public:
    // IllagerBeastPostAIStepSystem inner types define
    using ViewType = ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, IllagerBeastFlagComponent>,
        const StateVectorComponent,
        SubBBsComponent>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::IllagerBeastFlagComponent>,
        ::StateVectorComponent const,
        ::SubBBsComponent>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    _doIllagerBeastPostAIStepSystem(::StrictEntityContext const&, ::StateVectorComponent const&, ::SubBBsComponent&);
#else // @header-generator platform
    MCAPI static void _doIllagerBeastPostAIStepSystem(
        ::StrictEntityContext const&,
        ::StateVectorComponent const& stateVectorComponent,
        ::SubBBsComponent&            subBBsComponent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const& ILLAGERBEAST_POSITION_OFFSET();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
