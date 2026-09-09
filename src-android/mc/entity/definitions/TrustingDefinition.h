#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Item;
struct TrustingComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TrustingDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mTrustProbability;
    ::ll::TypedStorage<8, 24, std::set<const Item*>>    mTrustItems;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnTrust;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TrustingDefinition();

    MCNAPI void addTrustItemByName(std::string const&);

    MCNAPI void initialize(::EntityContext&, ::TrustingComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, TrustingDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
