#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPos;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class LevelChunk;
#else // @header-generator platform
#endif // @header-generator platform
class Random;
// clang-format on

class MultifaceFeature : public ::IFeature {
public:
    // MultifaceFeature inner types define
    using ShuffledFaces = ::Bedrock::small_vector<uchar, 6>;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>           mBlock;
    ::ll::TypedStorage<4, 4, int>                           mSearchRange;
    ::ll::TypedStorage<1, 1, bool>                          mCanPlaceOnFloor;
    ::ll::TypedStorage<1, 1, bool>                          mCanPlaceOnCeiling;
    ::ll::TypedStorage<1, 1, bool>                          mCanPlaceOnWall;
    ::ll::TypedStorage<4, 4, float>                         mChanceOfSpreading;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mCanBePlacedOn;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>           mValidDirections;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>               mBlock;
    ::ll::TypedStorage<4, 4, int>                               mSearchRange;
    ::ll::TypedStorage<1, 1, bool>                              mCanPlaceOnFloor;
    ::ll::TypedStorage<1, 1, bool>                              mCanPlaceOnCeiling;
    ::ll::TypedStorage<1, 1, bool>                              mCanPlaceOnWall;
    ::ll::TypedStorage<4, 4, float>                             mChanceOfSpreading;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mCanBePlacedOn;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>>             mValidDirections;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MultifaceFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MultifaceFeature();

    MCNAPI std::optional<BlockPos>
           _placeBlockIfPossible(::BlockSource&, ::BlockPos const&, ::Random&, ::gsl::span<const uchar> const) const;
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
    MCAPI ::std::optional<::BlockPos> _placeBlockIfPossible(
        ::BlockSource&                 region,
        ::BlockPos const&              pos,
        ::Random&                      random,
        ::gsl::span<uchar const> const placementDirections
    ) const;
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
