#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class NpcComponent;
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NpcDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mNPCData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&, ::NpcComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, NpcDefinition>>&);
    // NOLINTEND
};
