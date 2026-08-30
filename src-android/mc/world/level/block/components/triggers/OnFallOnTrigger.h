#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class OnFallOnTrigger : public ::IBlockComponent, public ::DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMinimumFallDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    OnFallOnTrigger& operator=(OnFallOnTrigger const&);
    OnFallOnTrigger(OnFallOnTrigger const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnFallOnTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onEvent(::BlockEvents::BlockEntityFallOnEvent const&) const;
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
