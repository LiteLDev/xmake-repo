#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/feature/Feature.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class Random;
// clang-format on

class SpikeFeature : public ::Feature {
public:
    // SpikeFeature inner types declare
    // clang-format off
    class EndSpike;
    // clang-format on

    // SpikeFeature inner types define
    class EndSpike {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int const>     mCenterX;
        ::ll::TypedStorage<4, 4, int const>     mCenterZ;
        ::ll::TypedStorage<4, 4, int const>     mRadius;
        ::ll::TypedStorage<4, 4, int const>     mHeight;
        ::ll::TypedStorage<1, 1, bool const>    mGuarded;
        ::ll::TypedStorage<4, 24, ::AABB const> mTopBoundingBox;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        EndSpike();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI EndSpike(int, int, int, int, bool);

        MCNAPI int getCenterX() const;

        MCNAPI int getCenterZ() const;

        MCNAPI int getHeight() const;

        MCNAPI ::AABB getTopBoundingBox() const;

        MCNAPI bool startsInChunk(::BlockPos const&) const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(int, int, int, int, bool);
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SpikeFeature::EndSpike const&> mSpike;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mCrystalBeamTarget;
    ::ll::TypedStorage<1, 1, bool>                            mCrystalInvulnerable;
    // NOLINTEND

public:
    // prevent constructor by default
    SpikeFeature& operator=(SpikeFeature const&);
    SpikeFeature(SpikeFeature const&);
    SpikeFeature();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SpikeFeature();

    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const;
#else // @header-generator platform
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SpikeFeature(::SpikeFeature::EndSpike const&);
#else // @header-generator platform
    MCAPI bool place(::BlockSource& region, ::BlockPos const& pos, bool clearAirAbove) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool place(::BlockSource&, ::BlockPos const&, bool) const;
#else // @header-generator platform
    MCAPI void postProcessMobsAt(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool placeManually(::BlockSource&, ::BlockPos const&, ::Random&, ::Actor*);

    MCNAPI void postProcessMobsAt(::BlockSource&, ::BlockPos const&, ::Random&) const;

    MCNAPI void setCrystalBeamTarget(::BlockPos const&);

    MCNAPI void setCrystalInvulnerable(bool);

    MCNAPI bool wasClippedDuringDecoration(::BlockSource&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SpikeFeature::EndSpike const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI bool wasClippedDuringDecoration(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $place(::BlockSource&, ::BlockPos const&, ::Random&) const;
#else // @header-generator platform
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
