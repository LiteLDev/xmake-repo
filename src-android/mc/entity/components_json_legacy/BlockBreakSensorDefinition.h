#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/BlockListEventMap.h"

// auto generated forward declare list
// clang-format off
class BlockBreakSensorComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BlockBreakSensorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                           mSensorRadius;
    ::ll::TypedStorage<8, 24, std::vector<BlockListEventMap>> mBlockSets;
    ::ll::TypedStorage<8, 24, std::vector<ActorFilterGroup>>  mSourceFilters;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockBreakSensorDefinition();

    MCNAPI void initialize(::EntityContext&, ::BlockBreakSensorComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockBreakSensorDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
