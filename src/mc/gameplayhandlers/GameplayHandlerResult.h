#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/gameplayhandlers/HandlerResult.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
struct GameplayHandlerResult {};
#else // @header-generator platform
template <typename T>
struct GameplayHandlerResult {
    HandlerResult handler_result;
    T             return_value;
};

// CTAD deduction guide
template <typename T>
GameplayHandlerResult(HandlerResult, T) -> GameplayHandlerResult<T>;
#endif // @header-generator platform
