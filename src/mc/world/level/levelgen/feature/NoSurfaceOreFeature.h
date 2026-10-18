#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class NoSurfaceOreFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::IntRange>          mCount;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mPlaceBlock;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mReplaceBlock;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mAvoidsBlock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::BlockDescriptor> mPlaceBlock;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor> mReplaceBlock;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor> mAvoidsBlock;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NoSurfaceOreFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
