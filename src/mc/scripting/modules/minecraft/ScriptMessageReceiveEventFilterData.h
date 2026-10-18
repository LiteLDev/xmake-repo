#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptMessageReceiveEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mMessageId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mMessageId;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptMessageReceiveEventFilterData& operator=(ScriptMessageReceiveEventFilterData const&);
    ScriptMessageReceiveEventFilterData();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft::EventFilters
