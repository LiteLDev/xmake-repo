#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/FunctionQueueOrder.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class FunctionManager;
// clang-format on

class IFunctionEntry {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    IFunctionEntry& operator=(IFunctionEntry const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFunctionEntry() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::FunctionManager&, ::CommandOrigin const&, ::FunctionQueueOrder) = 0;
#else // @header-generator platform
    virtual void
    execute(::FunctionManager& functionManager, ::CommandOrigin const& origin, ::FunctionQueueOrder order) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
