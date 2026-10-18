#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/StackRefResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EcsEventDispatcher;
// clang-format on

struct EcsEventDispatcherComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 16> mDispatcher;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::WeakRef<::EcsEventDispatcher>> mDispatcher;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    EcsEventDispatcherComponent();
#else // @header-generator platform
#endif // @header-generator platform
};
