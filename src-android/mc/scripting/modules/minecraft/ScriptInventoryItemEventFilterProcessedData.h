#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInventoryItemEventFilterProcessedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_set<int>>         mProcessedAllowedSlots;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mProcessedExcludeItems;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>       mProcessedExcludeTags;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mProcessedIncludeItems;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>       mProcessedIncludeTags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptInventoryItemEventFilterProcessedData(
        ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData const&
    );

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData&&);

    MCNAPI ~ScriptInventoryItemEventFilterProcessedData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
