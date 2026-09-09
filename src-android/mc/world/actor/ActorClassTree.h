#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ActorClassTree {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ActorType getEntityTypeIdLegacy(::ActorType);

    MCNAPI static bool hasCategory(::ActorCategory const&, ::ActorCategory);

    MCNAPI static bool isHangingEntity(::Actor const&);

    MCNAPI static bool isInstanceOf(::Actor const&, ::ActorType const);

    MCNAPI static bool isMob(::ActorType);

    MCNAPI static bool isMobLegacy(::ActorType);

    MCNAPI static bool isOfType(::ActorType, ::ActorType);

    MCNAPI static bool isTypeInstanceOf(::ActorType, ::ActorType);
    // NOLINTEND
};
