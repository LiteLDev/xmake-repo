#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/RenderParams.h"

struct HeartbeatServerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mHeartRateExpression;
    ::ll::UntypedStorage<8, 496>                mRenderParams;
    // NOLINTEND

public:
    // prevent constructor by default
    HeartbeatServerComponent& operator=(HeartbeatServerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::HeartbeatServerComponent& operator=(::HeartbeatServerComponent&&);
    // NOLINTEND
};
