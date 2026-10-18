#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorCategory.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ActorClassTree {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ActorType getEntityTypeIdLegacy(::ActorType);
#else // @header-generator platform
    MCAPI static bool isHangingEntity(::Actor const& inEntity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool hasCategory(::ActorCategory const&, ::ActorCategory);

    MCNAPI static bool isHangingEntity(::Actor const&);

    MCNAPI static bool isInstanceOf(::Actor const&, ::ActorType const);

    MCNAPI static bool isMob(::ActorType);

    MCNAPI static bool isMobLegacy(::ActorType);

    MCNAPI static bool isOfType(::ActorType, ::ActorType);

    MCNAPI static bool isTypeInstanceOf(::ActorType, ::ActorType);
#else // @header-generator platform
    MCAPI static bool isInstanceOf(::Actor const& inEntity, ::ActorType type);
#endif // @header-generator platform
    // NOLINTEND
};
