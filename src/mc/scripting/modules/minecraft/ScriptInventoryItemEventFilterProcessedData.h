#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on
#endif // @header-generator platform

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInventoryItemEventFilterProcessedData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<int>>         mProcessedAllowedSlots;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mProcessedExcludeItems;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>       mProcessedExcludeTags;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mProcessedIncludeItems;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>       mProcessedIncludeTags;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>           mProcessedAllowedSlots;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mProcessedExcludeItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>       mProcessedExcludeTags;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mProcessedIncludeItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>       mProcessedIncludeTags;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptInventoryItemEventFilterProcessedData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptInventoryItemEventFilterProcessedData(
#else // @header-generator platform
    MCAPI ScriptInventoryItemEventFilterProcessedData(
#endif // @header-generator platform
        ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData const&
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptInventoryItemEventFilterProcessedData();
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData const&);

    MCAPI ~ScriptInventoryItemEventFilterProcessedData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
