#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
class IBlockWorldGenAPI;
class Random;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class SpeleothemFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                          mBaseBlock;
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                          mPointedBlock;
    ::ll::TypedStorage<8, 8, std::vector<std::reference_wrapper<const HashedString>> const&> mReplaceableBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                                mBaseBlock;
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                                mPointedBlock;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::reference_wrapper<::HashedString const>> const&> mReplaceableBlocks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SpeleothemFeature& operator=(SpeleothemFeature const&);
    SpeleothemFeature(SpeleothemFeature const&);
    SpeleothemFeature();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SpeleothemFeature();

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
