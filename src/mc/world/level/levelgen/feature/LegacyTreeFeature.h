#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FeatureRegistry;
class Random;
// clang-format on

class LegacyTreeFeature : public ::IFeature {
public:
    // LegacyTreeFeature inner types define
    enum class Type : int {
        BambooJungle          = 0,
        BirchForest           = 1,
        BirchForestMutated    = 2,
        ExtremeHillsPlusTrees = 3,
        FlowerForest          = 4,
        Meadow                = 5,
        Forest                = 6,
        Ice                   = 7,
        Jungle                = 8,
        JungleEdge            = 9,
        MesaForest            = 10,
        Plains                = 11,
        Savanna               = 12,
        SavannaMutated        = 13,
        Taiga                 = 14,
        TaigaMega             = 15,
        TaigaMegaSpruce       = 16,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const> mBiomeInfoNoise;
    ::ll::UntypedStorage<1, 24>                           mTallGrassFeature;
    ::ll::TypedStorage<4, 4, float>                       mTreeChance;
    ::ll::UntypedStorage<8, 24>                           mFeatureRefs;
    ::ll::UntypedStorage<8, 48>                           mGetTreeFeature;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise const>                        mBiomeInfoNoise;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>                             mTallGrassFeature;
    ::ll::TypedStorage<4, 4, float>                                              mTreeChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::IFeature>>>              mFeatureRefs;
    ::ll::TypedStorage<8, 64, ::std::function<::WeakRef<::IFeature>(::Random&)>> mGetTreeFeature;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyTreeFeature();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LegacyTreeFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LegacyTreeFeature(::LegacyTreeFeature::Type, ::FeatureRegistry&, bool);
#else // @header-generator platform
    MCAPI
    LegacyTreeFeature(::LegacyTreeFeature::Type placementType, ::FeatureRegistry& registry, bool shouldPlaceLeafLitter);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::LegacyTreeFeature::Type, ::FeatureRegistry&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::LegacyTreeFeature::Type placementType, ::FeatureRegistry& registry, bool shouldPlaceLeafLitter);
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
