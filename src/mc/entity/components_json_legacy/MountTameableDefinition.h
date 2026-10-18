#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/FeedItem.h"
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemDescriptor;
#endif // @header-generator platform
class MountTamingComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct FeedItem;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MountTameableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                          mMinTemper;
    ::ll::TypedStorage<4, 4, int>                          mMaxTemper;
    ::ll::TypedStorage<4, 4, int>                          mAttemptTemperMod;
    ::ll::TypedStorage<8, 24, std::string>                 mFeedText;
    ::ll::TypedStorage<8, 24, std::string>                 mVehicleText;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>    mOnTame;
    ::ll::TypedStorage<8, 24, std::vector<FeedItem>>       mFeedItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>> mAutoRejectItems;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                              mMinTemper;
    ::ll::TypedStorage<4, 4, int>                              mMaxTemper;
    ::ll::TypedStorage<4, 4, int>                              mAttemptTemperMod;
    ::ll::TypedStorage<8, 32, ::std::string>                   mFeedText;
    ::ll::TypedStorage<8, 32, ::std::string>                   mVehicleText;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnTame;
    ::ll::TypedStorage<8, 24, ::std::vector<::FeedItem>>       mFeedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mAutoRejectItems;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MountTameableDefinition();

    MCNAPI void initialize(::EntityContext&, ::MountTamingComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::MountTamingComponent& component) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MountTameableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MountTameableDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
