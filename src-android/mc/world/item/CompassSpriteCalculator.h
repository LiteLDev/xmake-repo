#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
// clang-format on

class CompassSpriteCalculator {
public:
    // CompassSpriteCalculator inner types define
    using PointToTargetFunction = ::BlockPos (*)(::BlockSource const*, ::Actor*);

    using IsPointingAtTargetFunction = bool (*)(::BlockSource const*, ::Actor*);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockPos (*)(::BlockSource const*, ::Actor*)> mTargetToPointTo;
    ::ll::TypedStorage<8, 8, bool (*)(::BlockSource const*, ::Actor*)>       mIsPointingAtTarget;
    ::ll::TypedStorage<4, 4, int>                                            mFrame;
    ::ll::TypedStorage<4, 4, float>                                          mRot;
    ::ll::TypedStorage<4, 4, float>                                          mRotA;
    ::ll::TypedStorage<4, 4, int>                                            mLastUpdatedAt;
    // NOLINTEND

public:
    // prevent constructor by default
    CompassSpriteCalculator(CompassSpriteCalculator const&);
    CompassSpriteCalculator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompassSpriteCalculator(
        ::BlockPos (*)(::BlockSource const*, ::Actor*),
        bool (*)(::BlockSource const*, ::Actor*),
        float,
        float
    );

    MCNAPI int getFrame() const;

    MCNAPI ::CompassSpriteCalculator& operator=(::CompassSpriteCalculator const&);

    MCNAPI int update(::Actor&, bool);

    MCNAPI int updateFromPosition(::BlockSource const*, ::Actor*, float, float, float, bool, bool);

    MCNAPI int updateFromPosition(::BlockSource const*, ::BlockPos const&, float, float, float, bool, bool, bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isInLastDeathDimension(::BlockSource const*, ::Actor*);

    MCNAPI static bool isInOverworldDimension(::BlockSource const*, ::Actor*);

    MCNAPI static ::BlockPos pointTowardsLastDeathLocation(::BlockSource const*, ::Actor*);

    MCNAPI static ::BlockPos pointTowardsSpawnPoint(::BlockSource const*, ::Actor*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::BlockPos (*)(::BlockSource const*, ::Actor*), bool (*)(::BlockSource const*, ::Actor*), float, float);
    // NOLINTEND
};
