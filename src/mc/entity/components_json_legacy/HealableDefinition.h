#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/FeedItem.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
struct FeedItem;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HealableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<FeedItem>> mHealItems;
    ::ll::TypedStorage<1, 1, bool>                   mForceUse;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>    mFilter;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::FeedItem>> mHealItems;
    ::ll::TypedStorage<1, 1, bool>                       mForceUse;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mFilter;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI HealableDefinition();
#else // @header-generator platform
    MCAPI void addFeedItem(::FeedItem const& feedItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addFeedItem(::FeedItem const&);

    MCNAPI void addFeedItemByName(std::string const&);
#else // @header-generator platform
    MCAPI void addFeedItemByName(::std::string const& itemName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HealableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::HealableDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
