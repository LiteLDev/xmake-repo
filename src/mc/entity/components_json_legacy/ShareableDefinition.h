#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/Shareable.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct Shareable;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ShareableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Shareable>> mItems;
    ::ll::TypedStorage<1, 1, bool>                    mShareAllItems;
    ::ll::TypedStorage<4, 4, int>                     mAllItemWantAmount;
    ::ll::TypedStorage<4, 4, int>                     mAllItemSurplusAmount;
    ::ll::TypedStorage<4, 4, int>                     mAllItemMaxAmount;
    ::ll::TypedStorage<1, 1, bool>                    mSingularPickup;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Shareable>> mItems;
    ::ll::TypedStorage<1, 1, bool>                        mShareAllItems;
    ::ll::TypedStorage<4, 4, int>                         mAllItemWantAmount;
    ::ll::TypedStorage<4, 4, int>                         mAllItemSurplusAmount;
    ::ll::TypedStorage<4, 4, int>                         mAllItemMaxAmount;
    ::ll::TypedStorage<1, 1, bool>                        mSingularPickup;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ShareableDefinition();
#else // @header-generator platform
    MCAPI void addShareable(::Shareable const& shareable);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addShareable(::Shareable const&);

    MCNAPI void addShareableByName(std::string const&);
#else // @header-generator platform
    MCAPI void addShareableByName(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ShareableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ShareableDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
