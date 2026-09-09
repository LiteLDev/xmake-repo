#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/EnvironmentRequirement.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionBreedItem.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class BreedableComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreedableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                      mBreedsWith;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionBreedItem>> mBreedItems;
    ::ll::TypedStorage<8, 24, std::vector<EnvironmentRequirement>>   mEnvironmentRequirements;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                    mLoveFilter;
    ::ll::TypedStorage<1, 1, bool>                                   mTame;
    ::ll::TypedStorage<1, 1, bool>                                   mAllowSitting;
    ::ll::TypedStorage<1, 1, bool>                                   mCausesPregnancy;
    ::ll::TypedStorage<1, 1, bool>                                   mRequireFullHealth;
    ::ll::TypedStorage<4, 4, float>                                  mExtraChance;
    ::ll::TypedStorage<4, 4, float>                                  mBreedCooldownTimeSeconds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BreedableDefinition();

    MCNAPI void addBreedItem(::ActorDefinitionBreedItem const&);

    MCNAPI void addBreedItemByName(std::string const&);

    MCNAPI void addEnvironmentRequirement(::EnvironmentRequirement const&);

    MCNAPI void initialize(::EntityContext&, ::BreedableComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreedableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
