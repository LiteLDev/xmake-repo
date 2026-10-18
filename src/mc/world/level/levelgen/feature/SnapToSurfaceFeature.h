#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class IBlockWorldGenAPI;
class Random;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class SnapToSurfaceFeature : public ::IFeature {
public:
    // SnapToSurfaceFeature inner types define
    enum class Surface : int {
#if defined(LL_PLAT_A) // @header-generator platform
        CEILING           = 0,
        FLOOR             = 1,
        RANDOM_HORIZONTAL = 2,
#else // @header-generator platform
        Ceiling          = 0,
        Floor            = 1,
        RandomHorizontal = 2,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                               mFeatureToSnap;
    ::ll::TypedStorage<4, 4, int>                             mVerticalSearchRange;
    ::ll::TypedStorage<4, 4, ::SnapToSurfaceFeature::Surface> mSurface;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>   mAllowedSurfaceBlocks;
    ::ll::TypedStorage<1, 1, bool>                            mAllowAirPlacement;
    ::ll::TypedStorage<1, 1, bool>                            mAllowUnderwaterPlacement;
    ::ll::TypedStorage<1, 1, bool>                            mEmbedInSurface;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>            mFeatureToSnap;
    ::ll::TypedStorage<4, 4, int>                               mVerticalSearchRange;
    ::ll::TypedStorage<4, 4, ::SnapToSurfaceFeature::Surface>   mSurface;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mAllowedSurfaceBlocks;
    ::ll::TypedStorage<1, 1, bool>                              mAllowAirPlacement;
    ::ll::TypedStorage<1, 1, bool>                              mAllowUnderwaterPlacement;
    ::ll::TypedStorage<1, 1, bool>                              mEmbedInSurface;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SnapToSurfaceFeature();
#else // @header-generator platform
    virtual ~SnapToSurfaceFeature() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SnapToSurfaceFeature();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
