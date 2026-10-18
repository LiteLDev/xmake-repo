#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class Block;
class BlockPos;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class Material;
#else // @header-generator platform
#endif // @header-generator platform
class Random;
class WorldChangeTransaction;
// clang-format on

class Feature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>           mPlacerID;
    ::ll::TypedStorage<8, 8, ::WorldChangeTransaction*> mTransaction;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    Feature();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Feature();
#else // @header-generator platform
    virtual ~Feature() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const = 0;
#else // @header-generator platform
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const = 0;
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
    MCNAPI explicit Feature(::Actor*);

    MCNAPI bool _placeBlock(::BlockSource&, ::BlockPos const&, ::Block const&) const;

    MCNAPI void _setManuallyPlaced(::Actor*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI bool _placeBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;
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
