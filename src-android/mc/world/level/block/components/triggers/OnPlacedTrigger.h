#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class OnPlacedTrigger : public ::IBlockComponent, public ::DefinitionTrigger {
public:
    // prevent constructor by default
    OnPlacedTrigger& operator=(OnPlacedTrigger const&);
    OnPlacedTrigger(OnPlacedTrigger const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnPlacedTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onEvent(::BlockEvents::BlockPlaceEvent const&) const;
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
