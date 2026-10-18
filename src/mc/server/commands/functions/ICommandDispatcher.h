#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
// clang-format on

class ICommandDispatcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICommandDispatcher() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int performCommand(::CommandOrigin const&, ::Command&) = 0;
#else // @header-generator platform
    virtual int performCommand(::CommandOrigin const& origin, ::Command& command) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
