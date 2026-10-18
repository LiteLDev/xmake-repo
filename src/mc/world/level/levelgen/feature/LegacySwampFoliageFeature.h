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

class LegacySwampFoliageFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mGetTreeFeature;
    ::ll::UntypedStorage<1, 24> mSeagrassFeature;
    ::ll::UntypedStorage<1, 24> mTallGrassFeature;
    ::ll::UntypedStorage<1, 24> mHugeMushroomFeature;
    ::ll::UntypedStorage<1, 24> mSwampTreeFeature;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::function<::WeakRef<::IFeature>(::Random&)>> mGetTreeFeature;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>                             mSeagrassFeature;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>                             mTallGrassFeature;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>                             mHugeMushroomFeature;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>                             mSwampTreeFeature;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacySwampFoliageFeature();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LegacySwampFoliageFeature();

    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
#else // @header-generator platform
    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit LegacySwampFoliageFeature(::FeatureRegistry&);
#else // @header-generator platform
    MCAPI explicit LegacySwampFoliageFeature(::FeatureRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::FeatureRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::FeatureRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $place(::BlockSource&, ::BlockPos const&, ::Random&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const;
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
