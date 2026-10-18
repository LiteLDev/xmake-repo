#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec2;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class RectLayoutFeature : public ::IFeature {
public:
    // RectLayoutFeature inner types declare
    // clang-format off
    struct FeatureArea;
    // clang-format on

    // RectLayoutFeature inner types define
    struct FeatureArea {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<1, 24>   mFeatureRef;
        ::ll::TypedStorage<4, 4, int> mX;
        ::ll::TypedStorage<4, 4, int> mY;
        ::ll::TypedStorage<4, 4, int> mWidth;
        ::ll::TypedStorage<4, 4, int> mHeight;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeatureRef;
        ::ll::TypedStorage<4, 4, int>                    mX;
        ::ll::TypedStorage<4, 4, int>                    mY;
        ::ll::TypedStorage<4, 4, int>                    mWidth;
        ::ll::TypedStorage<4, 4, int>                    mHeight;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        FeatureArea& operator=(FeatureArea const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<RectLayoutFeature::FeatureArea>> mFeatureAreaCollection;
    ::ll::TypedStorage<4, 4, float>                                        mPercentageEmptySpace;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::RectLayoutFeature::FeatureArea>> mFeatureAreaCollection;
    ::ll::TypedStorage<4, 4, float>                                            mPercentageEmptySpace;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RectLayoutFeature();

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
