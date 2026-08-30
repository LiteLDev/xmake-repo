#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/PositionTrackingId.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class CompassSpriteCalculator;
class Level;
class LodestoneCompassComponentCalculator;
// clang-format on

class LodestoneCompassComponent {
public:
    // LodestoneCompassComponent inner types define
    using CompassIdMap = std::unordered_map<
        std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>>,
        std::unique_ptr<LodestoneCompassComponentCalculator>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::PositionTrackingId> mTrackingHandle;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>>, std::unique_ptr<LodestoneCompassComponentCalculator>>> mCalculators;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LodestoneCompassComponent& operator=(LodestoneCompassComponent const&);
    LodestoneCompassComponent(LodestoneCompassComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::LodestoneCompassComponentCalculator*
    _createCalculator(std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>> const&);

    MCNAPI int getAnimationFrame(
        std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>> const&,
        ::BlockPos const&,
        ::DimensionType const&
    );

    MCNAPI void initialize(::PositionTrackingId const&);

    MCNAPI void
    setTrackOnlyInSameDimension(std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>> const&, bool);

    MCNAPI bool tick(::Level&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int getSpinningAnimationFrame();

    MCNAPI static std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>>
    makeCalculatorId(::ActorUniqueID const&);

    MCNAPI static std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>>
    makeCalculatorId(::BlockPos const&, ::DimensionType const&);

    MCNAPI static void tickSpinningCalculator();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::CompassSpriteCalculator& mSpinningLodestone();
    // NOLINTEND
};
