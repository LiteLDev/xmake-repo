#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/phys/rope/Rope.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
struct RopeParams;
struct RopePointsRef;
struct RopeWave;
#else // @header-generator platform
class Rope;
#endif // @header-generator platform
// clang-format on

class RopeSystem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>               mWaveApplied;
    ::ll::TypedStorage<8, 24, std::vector<Rope>> mRopes;
    ::ll::TypedStorage<8, 8, ulong>              mCutRenderNode;
    ::ll::TypedStorage<8, 8, ulong>              mCutTicks;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>    mEndPinEntity;
    ::ll::UntypedStorage<1, 4>                   mTicking;
    ::ll::UntypedStorage<1, 140>                 mRenderMutex;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                   mWaveApplied;
    ::ll::TypedStorage<8, 24, ::std::vector<::Rope>> mRopes;
    ::ll::TypedStorage<8, 8, uint64>                 mCutRenderNode;
    ::ll::TypedStorage<8, 8, uint64>                 mCutTicks;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>        mEndPinEntity;
    ::ll::TypedStorage<4, 4, ::std::atomic_flag>     mTicking;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>    mRenderMutex;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RopeSystem();

    MCNAPI void addWave(ulong const, ::RopeWave&&);

    MCNAPI void cutAtPercent(float);

    MCNAPI ulong getCutNode() const;

    MCNAPI ::ActorUniqueID const& getEndPinEntity() const;

    MCNAPI ::RopePointsRef getPoints(ulong const);

    MCNAPI void initialize(::RopeParams const&, ulong const);

    MCNAPI void initializePins(::Vec3 const&, ::Vec3 const&);

    MCNAPI bool isCut() const;

    MCNAPI bool isDestroyed() const;

    MCNAPI void queueTick(::BlockSource&, std::shared_ptr<RopeSystem>&);

    MCNAPI void setRopeCount(ulong const);

    MCNAPI void storeEndPinEntity(::ActorUniqueID const&);

    MCNAPI void updatePins(ulong const, ::Vec3 const&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI void queueTick(::BlockSource& region, ::std::shared_ptr<::RopeSystem>& self);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool& sEnabled();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static bool& sEnabled();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
