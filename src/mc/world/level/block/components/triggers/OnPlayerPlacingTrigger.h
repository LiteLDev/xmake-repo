#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerPlacingEvent; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class OnPlayerPlacingTrigger : public ::IBlockComponent, public ::DefinitionTrigger {
public:
    // prevent constructor by default
    OnPlayerPlacingTrigger& operator=(OnPlayerPlacingTrigger const&);
    OnPlayerPlacingTrigger(OnPlayerPlacingTrigger const&);

#else // @header-generator platform
class OnPlayerPlacingTrigger : public ::DefinitionTrigger, public ::IBlockComponent {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~OnPlayerPlacingTrigger();
#else // @header-generator platform
    virtual ~OnPlayerPlacingTrigger() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onEvent(::BlockEvents::BlockPlayerPlacingEvent&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void onEvent(::BlockEvents::BlockPlayerPlacingEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
