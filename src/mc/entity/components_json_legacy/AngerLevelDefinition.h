#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/SoundDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class AngerLevelComponent;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SoundDefinition;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AngerLevelDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                           mDefaultAnnoyingness;
    ::ll::TypedStorage<4, 4, int>                           mDefaultProjectileAnnoyingness;
    ::ll::TypedStorage<4, 4, int>                           mMaxAngerLevel;
    ::ll::TypedStorage<4, 4, int>                           mAngryThreshold;
    ::ll::TypedStorage<1, 1, bool>                          mRemoveTargetBelowAngryThreshold;
    ::ll::TypedStorage<4, 4, int>                           mAngryBoost;
    ::ll::TypedStorage<8, 24, std::vector<SoundDefinition>> mOnIncreaseSoundDefinitions;
    ::ll::TypedStorage<4, 4, float>                         mAngerDecrementIntervalSeconds;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>           mNuisanceFilter;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                               mDefaultAnnoyingness;
    ::ll::TypedStorage<4, 4, int>                               mDefaultProjectileAnnoyingness;
    ::ll::TypedStorage<4, 4, int>                               mMaxAngerLevel;
    ::ll::TypedStorage<4, 4, int>                               mAngryThreshold;
    ::ll::TypedStorage<1, 1, bool>                              mRemoveTargetBelowAngryThreshold;
    ::ll::TypedStorage<4, 4, int>                               mAngryBoost;
    ::ll::TypedStorage<8, 24, ::std::vector<::SoundDefinition>> mOnIncreaseSoundDefinitions;
    ::ll::TypedStorage<4, 4, float>                             mAngerDecrementIntervalSeconds;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>               mNuisanceFilter;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addOnIncreaseSoundDefinition(::SoundDefinition const&);
#else // @header-generator platform
    MCAPI void addOnIncreaseSoundDefinition(::SoundDefinition const& soundDefinition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::AngerLevelComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::AngerLevelComponent& component) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AngerLevelDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AngerLevelDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
