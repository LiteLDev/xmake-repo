#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockStepOffEvent; }
// clang-format on

class OnStepOffTrigger : public ::IBlockComponent, public ::DefinitionTrigger {
public:
    // prevent constructor by default
    OnStepOffTrigger& operator=(OnStepOffTrigger const&);
    OnStepOffTrigger(OnStepOffTrigger const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnStepOffTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onEvent(::BlockEvents::BlockStepOffEvent const&) const;
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
