#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/levelgen/feature/ReplaceRule.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/brstd/once_flag.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/BlockType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/feature/IFeature.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/feature/ReplaceRule.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Block;
#endif // @header-generator platform
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class IBlockWorldGenAPI;
class Random;
#else // @header-generator platform
class BlockType;
struct ReplaceRule;
#endif // @header-generator platform
// clang-format on

class OreFeature : public ::IFeature {
public:
    // OreFeature inner types declare
    // clang-format off
    struct ReplaceRulesAccelerator;
    struct SphereData;
    struct ScratchData;
    // clang-format on

    // OreFeature inner types define
    struct ReplaceRulesAccelerator {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<std::pair<const Block*, std::vector<const BlockType*>>>> mRules;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::Block const*, ::std::vector<::BlockType const*>>>> mRules;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct SphereData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mCenter;
        ::ll::TypedStorage<4, 4, float>   mHalfRSqr;
        ::ll::TypedStorage<4, 4, float>   mHalfR;
        // NOLINTEND
    };

    struct ScratchData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<OreFeature::SphereData>>  mAllSpheres;
        ::ll::TypedStorage<8, 24, std::vector<OreFeature::SphereData*>> mSpheres;
        ::ll::TypedStorage<4, 4, uint>                                  mActiveSpheres;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ScratchData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::OreFeature::SphereData>>  mAllSpheres;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreFeature::SphereData*>> mSpheres;
        ::ll::TypedStorage<4, 4, uint>                                      mActiveSpheres;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mCount;
    ::ll::TypedStorage<4, 4, float>                                  mCountf;
    ::ll::TypedStorage<4, 4, float>                                  mCountfInv;
    ::ll::TypedStorage<4, 4, float>                                  mDiscardChanceOnAirExposure;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ReplaceRule>>              mReplaceRules;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ReplaceRule>>          mReplaceRules;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::brstd::once_flag>                     mRulesAcceleratorInitFlag;
    ::ll::TypedStorage<8, 24, ::OreFeature::ReplaceRulesAccelerator> mRulesAccelerator;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~OreFeature();
#else // @header-generator platform
    virtual ~OreFeature() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OreFeature();

    MCNAPI OreFeature(int, std::vector<ReplaceRule>&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(int, std::vector<ReplaceRule>&&);
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
