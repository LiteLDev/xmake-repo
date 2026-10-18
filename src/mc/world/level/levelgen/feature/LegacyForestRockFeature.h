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

class LegacyForestRockFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24> mForestRockFeature;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mForestRockFeature;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyForestRockFeature();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LegacyForestRockFeature();
#else // @header-generator platform
    virtual ~LegacyForestRockFeature() /*override*/ = default;
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
    MCNAPI explicit LegacyForestRockFeature(::FeatureRegistry const&);
#else // @header-generator platform
    MCAPI explicit LegacyForestRockFeature(::FeatureRegistry const& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::FeatureRegistry const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::FeatureRegistry const& registry);
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
