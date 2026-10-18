#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class BeardAndShaverFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                   mFeatureRef;
    ::ll::TypedStorage<4, 24, ::BoundingBox>      mBoundingBox;
    ::ll::TypedStorage<4, 4, float>               mYDelta;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mSurfaceBlock;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mSupportBlock;
    ::ll::TypedStorage<4, 4, float>               mBeardRaggednessMin;
    ::ll::TypedStorage<4, 4, float>               mBeardRaggednessMax;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeatureRef;
    ::ll::TypedStorage<4, 24, ::BoundingBox>         mBoundingBox;
    ::ll::TypedStorage<4, 4, float>                  mYDelta;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>    mSurfaceBlock;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>    mSupportBlock;
    ::ll::TypedStorage<4, 4, float>                  mBeardRaggednessMin;
    ::ll::TypedStorage<4, 4, float>                  mBeardRaggednessMax;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BeardAndShaverFeature();
#else // @header-generator platform
    virtual ~BeardAndShaverFeature() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BeardAndShaverFeature();
#else // @header-generator platform
    MCAPI BeardAndShaverFeature();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();
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
