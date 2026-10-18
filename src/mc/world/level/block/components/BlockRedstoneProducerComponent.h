#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/legacy/facing/Name.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/Direction.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockTransformationComponent;
#if defined(LL_PLAT_A) // @header-generator platform
namespace BlockEvents { class BlockPlaceEvent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace BlockEvents { class BlockStateChangeEvent; }
// clang-format on

struct BlockRedstoneProducerComponent : public ::IBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, schar> mPower;
    ::ll::TypedStorage<1, 1, uchar> mStronglyPoweredFace;
    ::ll::UntypedStorage<1, 1>      mConnectedFaces;
    ::ll::TypedStorage<1, 1, bool>  mIsTransformRelative;
    ::ll::TypedStorage<1, 1, bool>  mAllowPowerUp;
    ::ll::TypedStorage<1, 1, bool>  mAllowPowerDown;
    ::ll::TypedStorage<1, 1, bool>  mSetSignalStrengthOnRedstoneComponentSetup;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, schar>                                 mPower;
    ::ll::TypedStorage<1, 1, uchar>                                 mStronglyPoweredFace;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::Facing::Name, 6>> mConnectedFaces;
    ::ll::TypedStorage<1, 1, bool>                                  mIsTransformRelative;
    ::ll::TypedStorage<1, 1, bool>                                  mAllowPowerUp;
    ::ll::TypedStorage<1, 1, bool>                                  mAllowPowerDown;
    ::ll::TypedStorage<1, 1, bool>                                  mSetSignalStrengthOnRedstoneComponentSetup;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finalize(::BlockTransformationComponent const*);
#else // @header-generator platform
    MCAPI void finalize(::BlockTransformationComponent const* transformationComponent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onEvent(::BlockEvents::BlockPlaceEvent const&) const;

    MCNAPI void onEvent(::BlockEvents::BlockStateChangeEvent const&) const;
#else // @header-generator platform
    MCAPI void onEvent(::BlockEvents::BlockStateChangeEvent const& ev) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool const isSignalSource(::Block const&);
#else // @header-generator platform
    MCAPI static void setRedstoneSignal(::Block const& block, ::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setRedstoneSignal(::Block const&, ::BlockSource&, ::BlockPos const&);

    MCNAPI static void setupRedstoneComponent(::Block const&, ::BlockSource&, ::BlockPos const&);

    MCNAPI static bool const shouldConnectToRedstone(::Block const&, ::Direction::Type);
#else // @header-generator platform
    MCAPI static void setupRedstoneComponent(::Block const& block, ::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND
};
