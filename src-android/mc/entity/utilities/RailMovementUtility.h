#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IConstBlockSource;
class Vec3;
// clang-format on

class RailMovementUtility {
public:
    // RailMovementUtility inner types declare
    // clang-format off
    struct Exit;
    struct RailExits;
    // clang-format on

    // RailMovementUtility inner types define
    struct Exit {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> x;
        ::ll::TypedStorage<4, 4, int> y;
        ::ll::TypedStorage<4, 4, int> z;
        // NOLINTEND
    };

    struct RailExits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::RailMovementUtility::Exit> mExitA;
        ::ll::TypedStorage<4, 12, ::RailMovementUtility::Exit> mExitB;
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec3 calculateGoldenRailSpeedIncrease(::IConstBlockSource const&, ::BlockPos const&, int, ::Vec3);

    MCNAPI static ::Vec3
    calculateMoveVelocity(::Block const&, int, float, bool, ::Vec3&, bool&, bool&, std::function<bool(Vec3&)> const&);

    MCNAPI static bool calculatePassengerRailMovementInput(::Vec3&, float, float);

    MCNAPI static ::Vec3 calculatePostRailMovementMinecartPosition(
        ::IConstBlockSource const&,
        ::Vec3 const&,
        ::Vec3,
        ::BlockPos const&,
        int,
        ::Vec3&
    );

    MCNAPI static ::Vec3 calculatePreRailMovementMinecartPosition(::Vec3, ::BlockPos const&, int, float);

    MCNAPI static bool getPos(::IConstBlockSource const&, ::Vec3&, ::Vec3);

    MCNAPI static bool getPosOffs(::IConstBlockSource const&, ::Vec3&, ::Vec3, float);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::array<RailMovementUtility::RailExits, 10> const& RAIL_EXITS();
    // NOLINTEND
};
