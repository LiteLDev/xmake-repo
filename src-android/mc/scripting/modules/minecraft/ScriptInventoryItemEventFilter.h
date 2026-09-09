#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptInventoryItemEventFilterProcessedData.h"
#include "mc/scripting/modules/minecraft/items/ScriptPlayerInventoryType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptInventoryItemEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInventoryItemEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 168, ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterProcessedData> mProcessedData;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<int>>> mAllowedSlots;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mExcludeItems;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mExcludeTags;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mIncludeItems;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mIncludeTags;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mIgnoreQuantityChange;
    ::ll::TypedStorage<4, 8, std::optional<ScriptModuleMinecraft::ScriptPlayerInventoryType>> mPlayerInventoryType;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptInventoryItemEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&&);

    MCNAPI ::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);

    MCNAPI void process();

    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilterData const&) const;

    MCNAPI ~ScriptInventoryItemEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptInventoryItemEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
