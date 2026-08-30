#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct SignalNameSubscriberCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<8, 8, ulong>        count;
    // NOLINTEND

public:
    // prevent constructor by default
    SignalNameSubscriberCount& operator=(SignalNameSubscriberCount const&);
    SignalNameSubscriberCount(SignalNameSubscriberCount const&);
    SignalNameSubscriberCount();
};

} // namespace ScriptModuleMinecraft
