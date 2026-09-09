#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionFeedItem.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct AgeableComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AgeableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                 mSecondsAsBaby;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                   mInteractFilters;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionFeedItem>> mFeedItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>          mDropItems;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>             mOnGrowUp;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>          mPauseGrowthItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>          mResetGrowthItems;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>             mOnPauseGrowth;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>             mOnResetGrowth;
    // NOLINTEND

public:
    // prevent constructor by default
    AgeableDefinition& operator=(AgeableDefinition const&);
    AgeableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AgeableDefinition(::AgeableDefinition const&);

    MCNAPI void addDropItem(::ItemDescriptor const&);

    MCNAPI void addFeedItem(::ActorDefinitionFeedItem const&);

    MCNAPI void addFeedItemByName(std::string const&);

    MCNAPI void addPauseGrowthItem(::ItemDescriptor const&);

    MCNAPI void addResetGrowthItem(::ItemDescriptor const&);

    MCNAPI bool canGrowUp() const;

    MCNAPI int getTicksAsBaby() const;

    MCNAPI void initialize(::EntityContext&, ::AgeableComponent&) const;

    MCNAPI ~AgeableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AgeableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AgeableDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
