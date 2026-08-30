#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/legacy/facing/Name.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockTransformationComponent;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockStateChangeEvent; }
// clang-format on

struct BlockRedstoneProducerComponent : public ::IBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, schar> mPower;
    ::ll::TypedStorage<1, 1, uchar> mStronglyPoweredFace;
    ::ll::UntypedStorage<1, 1>      mConnectedFaces;
    ::ll::TypedStorage<1, 1, bool>  mIsTransformRelative;
    ::ll::TypedStorage<1, 1, bool>  mAllowPowerUp;
    ::ll::TypedStorage<1, 1, bool>  mAllowPowerDown;
    ::ll::TypedStorage<1, 1, bool>  mSetSignalStrengthOnRedstoneComponentSetup;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void finalize(::BlockTransformationComponent const*);

    MCNAPI void onEvent(::BlockEvents::BlockPlaceEvent const&) const;

    MCNAPI void onEvent(::BlockEvents::BlockStateChangeEvent const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool const isSignalSource(::Block const&);

    MCNAPI static void setRedstoneSignal(::Block const&, ::BlockSource&, ::BlockPos const&);

    MCNAPI static void setupRedstoneComponent(::Block const&, ::BlockSource&, ::BlockPos const&);

    MCNAPI static bool const shouldConnectToRedstone(::Block const&, ::Direction::Type);
    // NOLINTEND
};
