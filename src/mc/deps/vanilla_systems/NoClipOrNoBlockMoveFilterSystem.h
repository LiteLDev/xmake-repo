#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct MoveRequestComponent;
struct OffsetsComponent;
struct StateVectorComponent;
struct SubBBsComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct TickingSystemWithInfo;
#else // @header-generator platform
#endif // @header-generator platform
namespace VanillaSystems { struct VanillaSystemsEventingComponent; }
// clang-format on

namespace VanillaSystems {

struct NoClipOrNoBlockMoveFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void tick(
        ::StrictEntityContext const&,
        ::MoveRequestComponent const&,
        ::OffsetsComponent const&,
        ::ActorDataFlagComponent const&,
        ::AABBShapeComponent&,
        ::StateVectorComponent&,
        ::SubBBsComponent&,
        ::EntityModifier<MoveRequestComponent>,
        ::OptionalGlobal<VanillaSystems::VanillaSystemsEventingComponent>,
        ::IConstBlockSource const&
#else // @header-generator platform
    MCAPI static void tick(
        ::StrictEntityContext const&                                        context,
        ::MoveRequestComponent const&                                       moveRequest,
        ::OffsetsComponent const&                                           offsets,
        ::ActorDataFlagComponent const&                                     actorData,
        ::AABBShapeComponent&                                               aabb,
        ::StateVectorComponent&                                             state,
        ::SubBBsComponent&                                                  subBBs,
        ::EntityModifier<::MoveRequestComponent>                            mod,
        ::OptionalGlobal<::VanillaSystems::VanillaSystemsEventingComponent> eventingComponent,
        ::IConstBlockSource const&                                          region
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace VanillaSystems
