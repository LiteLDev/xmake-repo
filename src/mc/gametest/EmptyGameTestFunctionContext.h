#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/gametest/framework/IGameTestFunctionContext.h"

class EmptyGameTestFunctionContext : public ::gametest::IGameTestFunctionContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmptyGameTestFunctionContext() = default;
    // NOLINTEND
};
#else // @header-generator platform
class EmptyGameTestFunctionContext {};
#endif // @header-generator platform
