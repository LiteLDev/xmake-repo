#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptHotbarEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSlot;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptHotbarEventFilterData();
};

} // namespace ScriptModuleMinecraft::EventFilters
