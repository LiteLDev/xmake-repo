#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/FeedItem.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HealableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<FeedItem>> mHealItems;
    ::ll::TypedStorage<1, 1, bool>                   mForceUse;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>    mFilter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HealableDefinition();

    MCNAPI void addFeedItem(::FeedItem const&);

    MCNAPI void addFeedItemByName(std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HealableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
