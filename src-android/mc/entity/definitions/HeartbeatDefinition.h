#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct HeartbeatServerComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HeartbeatDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>      mSoundEventName;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mHeartRateExpression;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HeartbeatDefinition();

    MCNAPI void initialize(::EntityContext&, ::HeartbeatServerComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HeartbeatDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
