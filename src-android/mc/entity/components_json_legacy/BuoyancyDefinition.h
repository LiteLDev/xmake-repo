#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/BuoyancyMovementType.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class BuoyancyComponent;
class EntityContext;
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BuoyancyDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                         mBaseBuoyancy;
    ::ll::TypedStorage<4, 4, float>                         mDragDownOnRemoval;
    ::ll::TypedStorage<4, 4, float>                         mBigWaveProbability;
    ::ll::TypedStorage<4, 4, float>                         mBigWaveSpeedMultiplier;
    ::ll::TypedStorage<1, 1, ::BuoyancyMovementType>        mMovementType;
    ::ll::TypedStorage<1, 1, bool>                          mApplyGravity;
    ::ll::TypedStorage<1, 1, bool>                          mCanAutoStepFromLiquid;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mLiquidBlocks;
    ::ll::UntypedStorage<8, 16>                             mFloatData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BuoyancyDefinition();

    MCNAPI void _addLiquidBlockDescriptor(::BlockDescriptor const&);

    MCNAPI ::Json::Value _serialize() const;

    MCNAPI void initialize(::EntityContext&, ::BuoyancyComponent&) const;

    MCNAPI void setMovementType(std::string const&);

    MCNAPI void uninitialize(::EntityContext&, ::BuoyancyComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BuoyancyDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
