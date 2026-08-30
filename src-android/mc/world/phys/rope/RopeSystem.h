#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/phys/rope/Rope.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Vec3;
struct RopeParams;
struct RopePointsRef;
struct RopeWave;
// clang-format on

class RopeSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>               mWaveApplied;
    ::ll::TypedStorage<8, 24, std::vector<Rope>> mRopes;
    ::ll::TypedStorage<8, 8, ulong>              mCutRenderNode;
    ::ll::TypedStorage<8, 8, ulong>              mCutTicks;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>    mEndPinEntity;
    ::ll::UntypedStorage<1, 4>                   mTicking;
    ::ll::UntypedStorage<1, 140>                 mRenderMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& sEnabled();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
