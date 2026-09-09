#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/Shareable.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ShareableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Shareable>> mItems;
    ::ll::TypedStorage<1, 1, bool>                    mShareAllItems;
    ::ll::TypedStorage<4, 4, int>                     mAllItemWantAmount;
    ::ll::TypedStorage<4, 4, int>                     mAllItemSurplusAmount;
    ::ll::TypedStorage<4, 4, int>                     mAllItemMaxAmount;
    ::ll::TypedStorage<1, 1, bool>                    mSingularPickup;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShareableDefinition();

    MCNAPI void addShareable(::Shareable const&);

    MCNAPI void addShareableByName(std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ShareableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
