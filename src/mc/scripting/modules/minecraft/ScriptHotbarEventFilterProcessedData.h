#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptHotbarEventFilterProcessedData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<int>> mProcessedAllowedSlots;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>> mProcessedAllowedSlots;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptHotbarEventFilterProcessedData();
#else // @header-generator platform
    MCAPI ~ScriptHotbarEventFilterProcessedData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
