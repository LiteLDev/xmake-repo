#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockRandomTickLegacyEvent; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct BlockRandomTickingComponent : public ::IBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::DefinitionTrigger> mOnTimeDown;
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> mOnTimeDown;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockRandomTickingComponent& operator=(BlockRandomTickingComponent const&);
    BlockRandomTickingComponent(BlockRandomTickingComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ~BlockRandomTickingComponent() = default;
#endif // @header-generator platform
    // NOLINTEND
};
