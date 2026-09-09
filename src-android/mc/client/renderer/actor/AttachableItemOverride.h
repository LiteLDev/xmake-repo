#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinition;
// clang-format on

struct AttachableItemOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorResourceDefinition>> mAttachableResourceDefinition;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                         mFilterExpression;
    // NOLINTEND

public:
    // prevent constructor by default
    AttachableItemOverride& operator=(AttachableItemOverride const&);
    AttachableItemOverride(AttachableItemOverride const&);
    AttachableItemOverride();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AttachableItemOverride();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
