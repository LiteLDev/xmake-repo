#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/levelgen/feature/Feature.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/levelgen/feature/IFeature.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class FeatureRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class IFeature;
#else // @header-generator platform
#endif // @header-generator platform
class Random;
// clang-format on

class LegacyForestFoliageFeature : public ::Feature {
public:
    // LegacyForestFoliageFeature inner types define
    enum class Type : int {
        Flower = 0,
        Normal = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8>  mForestType;
    ::ll::UntypedStorage<1, 24> mTallGrassFeature;
    ::ll::UntypedStorage<1, 24> mDoublePlantFeature;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::LegacyForestFoliageFeature::Type> mForestType;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>             mTallGrassFeature;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>             mDoublePlantFeature;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyForestFoliageFeature();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LegacyForestFoliageFeature();

    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
#else // @header-generator platform
    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LegacyForestFoliageFeature(::LegacyForestFoliageFeature::Type, ::FeatureRegistry&);
#else // @header-generator platform
    MCAPI LegacyForestFoliageFeature(::LegacyForestFoliageFeature::Type forestType, ::FeatureRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::LegacyForestFoliageFeature::Type, ::FeatureRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::LegacyForestFoliageFeature::Type forestType, ::FeatureRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $place(::BlockSource&, ::BlockPos const&, ::Random&) const;
#else // @header-generator platform
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
