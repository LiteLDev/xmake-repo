#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/EntityPredicateToken.h"
#include "mc/world/level/chunk/EntitySpawnReason.h"
#include "mc/world/level/chunk/FinalizeMobToken.h"
#include "mc/world/level/chunk/HeightmapToken.h"
#include "mc/world/level/chunk/ObstructionPredicateToken.h"
#include "mc/world/level/chunk/PlacementTypeToken.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class IRandom;
class Mob;
namespace br::spawn { class PlacementType; }
namespace br::spawn { struct EntityType; }
namespace br::spawn::transform { class PropertyBag; }
// clang-format on

namespace br::spawn {

class SpawnPlacements {
public:
    // SpawnPlacements inner types declare
    // clang-format off
    struct EntityRecord;
    class PlacementRecord;
    // clang-format on

    // SpawnPlacements inner types define
    struct EntityRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::br::spawn::HeightmapToken>            mHeightmap;
        ::ll::TypedStorage<2, 2, ::br::spawn::PlacementTypeToken>        mPlacement;
        ::ll::TypedStorage<2, 2, ::br::spawn::EntityPredicateToken>      mEntity;
        ::ll::TypedStorage<2, 2, ::br::spawn::ObstructionPredicateToken> mObstruction;
        ::ll::TypedStorage<2, 2, ::br::spawn::FinalizeMobToken>          mFinalizeMob;
        // NOLINTEND
    };

    class PlacementRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::br::spawn::SpawnPlacements&> mParent;
        ::ll::TypedStorage<8, 8, ulong>                         mIdx;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlacementRecord& operator=(PlacementRecord const&);
        PlacementRecord(PlacementRecord const&);
        PlacementRecord();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::br::spawn::SpawnPlacements::PlacementRecord& finalizeMob(::br::spawn::FinalizeMobToken);

        MCNAPI ::br::spawn::SpawnPlacements::PlacementRecord& obstruction(::br::spawn::ObstructionPredicateToken);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::tuple<std::string, br::spawn::SpawnPlacements::EntityRecord>>> mEntityRecords;
    ::ll::TypedStorage<8, 24, std::vector<std::tuple<std::string, std::function<bool (const br::spawn::EntityType&, BlockSource&, br::spawn::EntitySpawnReason&, BlockPos, IRandom&)>>>> mEntityPredicates;
    ::ll::TypedStorage<8, 24, std::vector<std::tuple<std::string, std::function<bool (BlockSource&, const Mob&, const br::spawn::EntityType&)>>>> mObstructionPredicates;
    ::ll::TypedStorage<8, 24, std::vector<std::tuple<std::string, std::function<void (const BlockSource&, SharedTypes::Legacy::Difficulty, br::spawn::EntitySpawnReason, Mob&, IRandom&, br::spawn::transform::PropertyBag&)>>>> mFinalizeMobTransform;
    ::ll::TypedStorage<8, 24, std::vector<std::tuple<std::string, std::function<bool (const Block&)>>>> mHeightmapTypes;
    ::ll::TypedStorage<8, 24, std::vector<std::tuple<std::string, std::unique_ptr<br::spawn::PlacementType>>>> mPlacementTypes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::tuple<br::spawn::EntityPredicateToken, bool>>> mReloadableEntitySpawnKeys;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::tuple<br::spawn::ObstructionPredicateToken, bool>>> mReloadableObstructionKeys;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnPlacements();

    MCNAPI void clearReloadablePredicates();

    MCNAPI ::br::spawn::EntityPredicateToken findEntityPredicate(std::string_view) const;

    MCNAPI ::br::spawn::HeightmapToken findHeightmap(std::string_view) const;

    MCNAPI ::br::spawn::ObstructionPredicateToken findObstruction(std::string_view) const;

    MCNAPI ::br::spawn::PlacementTypeToken findPlacementType(std::string_view) const;

    MCNAPI bool isEntityPredicateKeyRecordable(std::string_view) const;

    MCNAPI bool isObstructionPredicateKeyRecordable(std::string_view) const;

    MCNAPI ::br::spawn::SpawnPlacements::PlacementRecord record(
        std::string_view,
        ::br::spawn::PlacementTypeToken,
        ::br::spawn::HeightmapToken,
        ::br::spawn::EntityPredicateToken
    );

    MCNAPI ::br::spawn::EntityPredicateToken record(
        std::string_view,
        std::function<
            bool(const br::spawn::EntityType&, BlockSource&, br::spawn::EntitySpawnReason&, BlockPos, IRandom&)>
    );

    MCNAPI ::br::spawn::ObstructionPredicateToken
        record(std::string_view, std::function<bool(BlockSource&, const Mob&, const br::spawn::EntityType&)>);

    MCNAPI ::br::spawn::EntityPredicateToken recordReloadable(
        std::string_view,
        std::function<
            bool(const br::spawn::EntityType&, BlockSource&, br::spawn::EntitySpawnReason&, BlockPos, IRandom&)>
    );

    MCNAPI ::br::spawn::ObstructionPredicateToken
        recordReloadable(std::string_view, std::function<bool(BlockSource&, const Mob&, const br::spawn::EntityType&)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace br::spawn
