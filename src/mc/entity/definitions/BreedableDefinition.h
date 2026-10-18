#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/definitions/EnvironmentRequirement.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/flat_map.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionBreedItem.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BreedableComponent;
class EntityContext;
#else // @header-generator platform
class ActorDefinitionTrigger;
struct ActorDefinitionBreedItem;
struct ActorDefinitionIdentifier;
struct EnvironmentRequirement;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreedableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::ActorDefinitionIdentifier,
            ::ActorDefinitionTrigger,
            ::std::less<::ActorDefinitionIdentifier>,
            ::std::vector<::ActorDefinitionIdentifier>,
            ::std::vector<::ActorDefinitionTrigger>>>
                                                                         mBreedsWith;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionBreedItem>> mBreedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::EnvironmentRequirement>>   mEnvironmentRequirements;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                        mLoveFilter;
    ::ll::TypedStorage<1, 1, bool>                                       mTame;
    ::ll::TypedStorage<1, 1, bool>                                       mAllowSitting;
    ::ll::TypedStorage<1, 1, bool>                                       mCausesPregnancy;
    ::ll::TypedStorage<1, 1, bool>                                       mRequireFullHealth;
    ::ll::TypedStorage<4, 4, float>                                      mExtraChance;
    ::ll::TypedStorage<4, 4, float>                                      mBreedCooldownTimeSeconds;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BreedableDefinition();
#else // @header-generator platform
    MCAPI void addBreedItem(::ActorDefinitionBreedItem const& breedItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addBreedItem(::ActorDefinitionBreedItem const&);
#else // @header-generator platform
    MCAPI void addBreedItemByName(::std::string const& itemName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addBreedItemByName(std::string const&);

    MCNAPI void addEnvironmentRequirement(::EnvironmentRequirement const&);

    MCNAPI void initialize(::EntityContext&, ::BreedableComponent&) const;
#else // @header-generator platform
    MCAPI void addEnvironmentRequirement(::EnvironmentRequirement const& envReq);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreedableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BreedableDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
