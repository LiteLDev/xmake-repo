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
struct TickingSystemWithInfo;
namespace VanillaSystems { struct VanillaSystemsEventingComponent; }
// clang-format on

namespace VanillaSystems {

struct NoClipOrNoBlockMoveFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
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
    );
    // NOLINTEND
};

} // namespace VanillaSystems
