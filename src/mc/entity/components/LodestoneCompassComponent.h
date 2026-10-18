#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/BlockPos.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/PositionTrackingId.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/dimension/DimensionType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BlockPos;
#endif // @header-generator platform
class CompassSpriteCalculator;
class Level;
class LodestoneCompassComponentCalculator;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct DimensionType;
#endif // @header-generator platform
// clang-format on

class LodestoneCompassComponent {
public:
    // LodestoneCompassComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using CompassIdMap = std::unordered_map<
        std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>>,
        std::unique_ptr<LodestoneCompassComponentCalculator>>;
#else // @header-generator platform
    using CompassIdMap = ::std::unordered_map<
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>>,
        ::std::unique_ptr<::LodestoneCompassComponentCalculator>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::PositionTrackingId> mTrackingHandle;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>>, std::unique_ptr<LodestoneCompassComponentCalculator>>> mCalculators;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>>,
            ::std::unique_ptr<::LodestoneCompassComponentCalculator>>>
        mCalculators;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LodestoneCompassComponent& operator=(LodestoneCompassComponent const&);
    LodestoneCompassComponent(LodestoneCompassComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LodestoneCompassComponentCalculator*
    _createCalculator(std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>> const&);
#else // @header-generator platform
    MCAPI ::LodestoneCompassComponentCalculator*
    _createCalculator(::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>> const& compassId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getAnimationFrame(
        std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>> const&,
        ::BlockPos const&,
        ::DimensionType const&
    );

    MCNAPI void initialize(::PositionTrackingId const&);

    MCNAPI void
    setTrackOnlyInSameDimension(std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>> const&, bool);

    MCNAPI bool tick(::Level&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool tick(::Level& level);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int getSpinningAnimationFrame();

    MCNAPI static std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>>
    makeCalculatorId(::ActorUniqueID const&);

    MCNAPI static std::variant<ActorUniqueID, std::pair<BlockPos, DimensionType>>
    makeCalculatorId(::BlockPos const&, ::DimensionType const&);

    MCNAPI static void tickSpinningCalculator();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void tickSpinningCalculator();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::CompassSpriteCalculator& mSpinningLodestone();
#else // @header-generator platform
    MCAPI static ::CompassSpriteCalculator& mSpinningLodestone();
#endif // @header-generator platform
    // NOLINTEND
};
