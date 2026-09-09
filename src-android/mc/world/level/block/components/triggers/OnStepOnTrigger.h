#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockStepOnEvent; }
// clang-format on

class OnStepOnTrigger : public ::IBlockComponent, public ::DefinitionTrigger {
public:
    // prevent constructor by default
    OnStepOnTrigger& operator=(OnStepOnTrigger const&);
    OnStepOnTrigger(OnStepOnTrigger const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnStepOnTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onEvent(::BlockEvents::BlockStepOnEvent const&) const;
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
