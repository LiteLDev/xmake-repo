#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionFeedItem.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemDescriptor;
struct ActorDefinitionFeedItem;
#endif // @header-generator platform
struct AgeableComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AgeableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                 mSecondsAsBaby;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                   mInteractFilters;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionFeedItem>> mFeedItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>          mDropItems;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>             mOnGrowUp;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>          mPauseGrowthItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>          mResetGrowthItems;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>             mOnPauseGrowth;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>             mOnResetGrowth;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>   mUnk207183;
    ::ll::UntypedStorage<8, 64>  mUnk1793dc;
    ::ll::UntypedStorage<8, 24>  mUnk238b7c;
    ::ll::UntypedStorage<8, 24>  mUnk921531;
    ::ll::UntypedStorage<8, 104> mUnka52bbd;
    ::ll::UntypedStorage<8, 24>  mUnk6f6d9a;
    ::ll::UntypedStorage<8, 24>  mUnk16daff;
    ::ll::UntypedStorage<8, 104> mUnk2ae021;
    ::ll::UntypedStorage<8, 104> mUnk10292d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AgeableDefinition& operator=(AgeableDefinition const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AgeableDefinition(AgeableDefinition const&);
#endif // @header-generator platform
    AgeableDefinition();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AgeableDefinition(::AgeableDefinition const&);
#else // @header-generator platform
    MCAPI void addDropItem(::ItemDescriptor const& itemDescriptor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addDropItem(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI void addFeedItem(::ActorDefinitionFeedItem const& feedItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addFeedItem(::ActorDefinitionFeedItem const&);
#else // @header-generator platform
    MCAPI void addFeedItemByName(::std::string const& itemName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addFeedItemByName(std::string const&);
#else // @header-generator platform
    MCAPI void addPauseGrowthItem(::ItemDescriptor const& itemDescriptor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addPauseGrowthItem(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI void addResetGrowthItem(::ItemDescriptor const& itemDescriptor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addResetGrowthItem(::ItemDescriptor const&);
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::AgeableComponent& component) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canGrowUp() const;

    MCNAPI int getTicksAsBaby() const;

    MCNAPI void initialize(::EntityContext&, ::AgeableComponent&) const;

    MCNAPI ~AgeableDefinition();
#else // @header-generator platform
    MCAPI ~AgeableDefinition();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AgeableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AgeableDefinition const&);
#else // @header-generator platform
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AgeableDefinition>>& root);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
