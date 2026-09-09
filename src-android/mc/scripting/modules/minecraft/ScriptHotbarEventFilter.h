#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptHotbarEventFilterProcessedData.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptHotbarEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptHotbarEventFilter {
public:
    // ScriptHotbarEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, ::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilterProcessedData> mProcessedData;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<int>>> mAllowedSlots;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptHotbarEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void process();

    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilterData const&) const;

    MCNAPI ~ScriptHotbarEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
