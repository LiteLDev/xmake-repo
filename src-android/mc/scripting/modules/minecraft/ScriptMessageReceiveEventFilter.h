#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptMessageReceiveEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptMessageReceiveEventFilter {
public:
    // ScriptMessageReceiveEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptMessageReceiveEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mNamespaceIds;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageReceiveEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptMessageReceiveEventFilterData const&);

    MCNAPI ~ScriptMessageReceiveEventFilter();
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
