#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ItemStack;
// clang-format on

namespace Interactions {

class IActorEventCoordinatorDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IActorEventCoordinatorDependencies();
#else // @header-generator platform
    virtual ~IActorEventCoordinatorDependencies() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendActorUseItemEvent(::EntityContext&, ::ItemStack&, ::ItemUseMethod) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void sendActorUseItemEvent(::EntityContext& actor, ::ItemStack& item, ::ItemUseMethod useMethod) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Interactions
