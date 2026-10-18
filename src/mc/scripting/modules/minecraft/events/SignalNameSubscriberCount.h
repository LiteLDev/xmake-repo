#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct SignalNameSubscriberCount {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<8, 8, ulong>        count;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<8, 8, uint64>         count;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SignalNameSubscriberCount& operator=(SignalNameSubscriberCount const&);
    SignalNameSubscriberCount(SignalNameSubscriberCount const&);
    SignalNameSubscriberCount();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft
