#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerPlacingEvent; }
// clang-format on

class OnPlayerPlacingTrigger : public ::IBlockComponent, public ::DefinitionTrigger {
public:
    // prevent constructor by default
    OnPlayerPlacingTrigger& operator=(OnPlayerPlacingTrigger const&);
    OnPlayerPlacingTrigger(OnPlayerPlacingTrigger const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnPlayerPlacingTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onEvent(::BlockEvents::BlockPlayerPlacingEvent&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
