#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/SoundDefinition.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class AngerLevelComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AngerLevelDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mDefaultAnnoyingness;
    ::ll::TypedStorage<4, 4, int>                           mDefaultProjectileAnnoyingness;
    ::ll::TypedStorage<4, 4, int>                           mMaxAngerLevel;
    ::ll::TypedStorage<4, 4, int>                           mAngryThreshold;
    ::ll::TypedStorage<1, 1, bool>                          mRemoveTargetBelowAngryThreshold;
    ::ll::TypedStorage<4, 4, int>                           mAngryBoost;
    ::ll::TypedStorage<8, 24, std::vector<SoundDefinition>> mOnIncreaseSoundDefinitions;
    ::ll::TypedStorage<4, 4, float>                         mAngerDecrementIntervalSeconds;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>           mNuisanceFilter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addOnIncreaseSoundDefinition(::SoundDefinition const&);

    MCNAPI void initialize(::EntityContext&, ::AngerLevelComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AngerLevelDefinition>>&);
    // NOLINTEND
};
