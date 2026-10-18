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
class BaseGameVersion;
#if defined(LL_PLAT_A) // @header-generator platform
class Biome;
class BiomeRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPos;
class BlockSource;
class FeatureRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class IFeature;
#else // @header-generator platform
#endif // @header-generator platform
class Random;
// clang-format on

class LegacySpringsFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>    mWaterSpringFeature;
    ::ll::UntypedStorage<1, 24>    mLavaSpringFeature;
    ::ll::TypedStorage<1, 1, bool> mIsCavesAndCliffsUpdate;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mWaterSpringFeature;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mLavaSpringFeature;
    ::ll::TypedStorage<1, 1, bool>                   mIsCavesAndCliffsUpdate;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacySpringsFeature();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LegacySpringsFeature();
#else // @header-generator platform
    virtual ~LegacySpringsFeature() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
#else // @header-generator platform
    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LegacySpringsFeature(::FeatureRegistry const&, ::BaseGameVersion const&);
#else // @header-generator platform
    MCAPI LegacySpringsFeature(::FeatureRegistry const& registry, ::BaseGameVersion const& baseGameVersion);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::FeatureRegistry const&, ::BaseGameVersion const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::FeatureRegistry const& registry, ::BaseGameVersion const& baseGameVersion);
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
