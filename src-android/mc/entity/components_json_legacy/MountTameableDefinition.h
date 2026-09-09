#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/FeedItem.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class MountTamingComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MountTameableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mMinTemper;
    ::ll::TypedStorage<4, 4, int>                          mMaxTemper;
    ::ll::TypedStorage<4, 4, int>                          mAttemptTemperMod;
    ::ll::TypedStorage<8, 24, std::string>                 mFeedText;
    ::ll::TypedStorage<8, 24, std::string>                 mVehicleText;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>    mOnTame;
    ::ll::TypedStorage<8, 24, std::vector<FeedItem>>       mFeedItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mAutoRejectItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MountTameableDefinition();

    MCNAPI void initialize(::EntityContext&, ::MountTamingComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MountTameableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
