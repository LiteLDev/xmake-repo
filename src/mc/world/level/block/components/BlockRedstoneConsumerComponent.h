#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
namespace BlockEvents { class BlockPlaceEvent; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BlockRedstoneConsumerComponent : public ::IBlockComponent {
public:
    // BlockRedstoneConsumerComponent inner types define
    using OnSetupRedstoneComponentCallback = void(::BlockSource&, ::BlockPos const&);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, schar>                                       mMinPower;
    ::ll::TypedStorage<1, 1, bool>                                        mPropagatePower;
    ::ll::TypedStorage<1, 1, bool>                                        mConsumePowerAnyDirection;
    ::ll::TypedStorage<1, 1, bool>                                        mAcceptSameDirection;
    ::ll::TypedStorage<1, 1, bool>                                        mAcceptHalfPulse;
    ::ll::TypedStorage<1, 1, bool>                                        mIgnoreFirstUpdate;
    ::ll::TypedStorage<8, 8, void (*)(::BlockSource&, ::BlockPos const&)> mOnSetupRedstoneComponentCallback;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI void onEvent(::BlockEvents::BlockPlaceEvent const&) const;

    MCNAPI void setOnSetupRedstoneComponentCallback(void (*)(::BlockSource&, ::BlockPos const&));
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setupRedstoneComponent(::Block const&, ::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI static void setupRedstoneComponent(::Block const& block, ::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND
};
