#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class HeightDifferenceFilterFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                   mFeatureToPlace;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mMinPositiveHeightDiff;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mMaxPositiveHeightDiff;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mMinNegativeHeightDiff;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mMaxNegativeHeightDiff;
    ::ll::TypedStorage<4, 4, uint>                mSearchRadius;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeatureToPlace;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>  mMinPositiveHeightDiff;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>  mMaxPositiveHeightDiff;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>  mMinNegativeHeightDiff;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>  mMaxNegativeHeightDiff;
    ::ll::TypedStorage<4, 4, uint>                   mSearchRadius;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~HeightDifferenceFilterFeature();
#else // @header-generator platform
    virtual ~HeightDifferenceFilterFeature() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
