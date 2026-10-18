#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinecraftCommands;
// clang-format on

class DeferredCommandBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeferredCommandBase() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::MinecraftCommands&) = 0;
#else // @header-generator platform
    virtual void execute(::MinecraftCommands& commands) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
