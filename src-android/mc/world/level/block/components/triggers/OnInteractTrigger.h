#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class OnInteractTrigger : public ::IBlockComponent, public ::DefinitionTrigger {
public:
    // prevent constructor by default
    OnInteractTrigger& operator=(OnInteractTrigger const&);
    OnInteractTrigger(OnInteractTrigger const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnInteractTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onEvent(::BlockEvents::BlockPlayerInteractEvent&) const;
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
