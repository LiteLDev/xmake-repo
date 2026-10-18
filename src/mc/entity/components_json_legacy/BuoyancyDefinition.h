#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
#include "mc/entity/components_json_legacy/BuoyancyMovementType.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class BuoyancyComponent;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BuoyancyDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                         mBaseBuoyancy;
    ::ll::TypedStorage<4, 4, float>                         mDragDownOnRemoval;
    ::ll::TypedStorage<4, 4, float>                         mBigWaveProbability;
    ::ll::TypedStorage<4, 4, float>                         mBigWaveSpeedMultiplier;
    ::ll::TypedStorage<1, 1, ::BuoyancyMovementType>        mMovementType;
    ::ll::TypedStorage<1, 1, bool>                          mApplyGravity;
    ::ll::TypedStorage<1, 1, bool>                          mCanAutoStepFromLiquid;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mLiquidBlocks;
    ::ll::UntypedStorage<8, 16>                             mFloatData;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                             mBaseBuoyancy;
    ::ll::TypedStorage<4, 4, float>                             mDragDownOnRemoval;
    ::ll::TypedStorage<4, 4, float>                             mBigWaveProbability;
    ::ll::TypedStorage<4, 4, float>                             mBigWaveSpeedMultiplier;
    ::ll::TypedStorage<1, 1, ::BuoyancyMovementType>            mMovementType;
    ::ll::TypedStorage<1, 1, bool>                              mApplyGravity;
    ::ll::TypedStorage<1, 1, bool>                              mCanAutoStepFromLiquid;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mLiquidBlocks;
    ::ll::TypedStorage<8, 16, ::Json::Value>                    mFloatData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BuoyancyDefinition();
#else // @header-generator platform
    MCAPI void _addLiquidBlockDescriptor(::BlockDescriptor const& liquidBlockDescriptor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addLiquidBlockDescriptor(::BlockDescriptor const&);
#else // @header-generator platform
    MCAPI ::Json::Value _serialize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Json::Value _serialize() const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::BuoyancyComponent& component) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::BuoyancyComponent&) const;
#else // @header-generator platform
    MCAPI void setMovementType(::std::string const& movementType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setMovementType(std::string const&);

    MCNAPI void uninitialize(::EntityContext&, ::BuoyancyComponent&) const;
#else // @header-generator platform
    MCAPI void uninitialize(::EntityContext& entity, ::BuoyancyComponent&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BuoyancyDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BuoyancyDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
