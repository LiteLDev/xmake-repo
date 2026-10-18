#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class IBlockWorldGenAPI;
class Random;
namespace SpeleothemUtils { class WindOffsetter; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ValueProviders { struct UniformFloat; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LargeDripstoneFeature : public ::IFeature {
public:
    // LargeDripstoneFeature inner types declare
    // clang-format off
    class LargeDripstone;
    // clang-format on

    // LargeDripstoneFeature inner types define
    class LargeDripstone {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> mRoot;
        ::ll::TypedStorage<1, 1, bool const>  mPointingUp;
        ::ll::TypedStorage<4, 4, int>         mRadius;
        ::ll::TypedStorage<4, 4, float const> mBluntness;
        ::ll::TypedStorage<4, 4, float const> mScale;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        LargeDripstone();

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool moveBackUntilBaseIsInsideStoneAndShrinkRadiusIfNecessary(
            ::IBlockWorldGenAPI&,
            ::SpeleothemUtils::WindOffsetter const&
#else // @header-generator platform
        MCAPI bool moveBackUntilBaseIsInsideStoneAndShrinkRadiusIfNecessary(
            ::IBlockWorldGenAPI&                    target,
            ::SpeleothemUtils::WindOffsetter const& wind
#endif // @header-generator platform
        );

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void placeBlocks(::IBlockWorldGenAPI&, ::Random&, ::SpeleothemUtils::WindOffsetter const&) const;
#else // @header-generator platform
        MCAPI void
        placeBlocks(::IBlockWorldGenAPI& target, ::Random& random, ::SpeleothemUtils::WindOffsetter const& wind) const;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LargeDripstoneFeature();

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
