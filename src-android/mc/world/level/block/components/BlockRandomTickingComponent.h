#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockRandomTickLegacyEvent; }
// clang-format on

struct BlockRandomTickingComponent : public ::IBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::DefinitionTrigger> mOnTimeDown;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRandomTickingComponent& operator=(BlockRandomTickingComponent const&);
    BlockRandomTickingComponent(BlockRandomTickingComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockRandomTickingComponent();
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
