#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptMessageReceiveEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMessageId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageReceiveEventFilterData& operator=(ScriptMessageReceiveEventFilterData const&);
    ScriptMessageReceiveEventFilterData();
};

} // namespace ScriptModuleMinecraft::EventFilters
