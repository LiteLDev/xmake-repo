#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/systems/falling_block_system_on_land/DelayDelegateData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/item/ITickDelegate.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class FallingBlock;
class FallingBlockActor;
class IBlockSource;
namespace FallingBlockSystemOnLand { struct DelayDelegateData; }
// clang-format on
#endif // @header-generator platform

namespace FallingBlockSystemOnLand {

class SystemTickDelegate : public ::ITickDelegate {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<FallingBlockSystemOnLand::DelayDelegateData>> mOnLandDataQueue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::FallingBlockSystemOnLand::DelayDelegateData>> mOnLandDataQueue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onLand(::FallingBlock const& block, ::IBlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual void breakBlock(::FallingBlockActor& fallingBlock) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLand(::FallingBlock const& block, ::IBlockSource& region, ::BlockPos const& pos);

    MCAPI void $breakBlock(::FallingBlockActor& fallingBlock);


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace FallingBlockSystemOnLand
