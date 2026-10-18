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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 496>                mRenderParams;
#else // @header-generator platform
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 504, ::RenderParams> mRenderParams;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 520, ::RenderParams> mRenderParams;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    HeartbeatServerComponent& operator=(HeartbeatServerComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    HeartbeatServerComponent(HeartbeatServerComponent const&);
    HeartbeatServerComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HeartbeatServerComponent& operator=(::HeartbeatServerComponent&&);
#else // @header-generator platform
    MCAPI ::HeartbeatServerComponent& operator=(::HeartbeatServerComponent&&);
#endif // @header-generator platform
    // NOLINTEND
};
