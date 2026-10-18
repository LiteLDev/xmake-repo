#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/input/ScriptingInputButton.h"
#include "mc/input/ScriptingInputButtonState.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptInputEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptInputEventFilter {
public:
    // ScriptInputEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptInputEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ScriptingInputButton>>> mInputButtons;
    ::ll::TypedStorage<4, 8, std::optional<ScriptingInputButtonState>>          mInputState;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInputEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptInputEventFilterData const&) const;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptingInputButton>>> mInputButtons;
    ::ll::TypedStorage<4, 8, ::std::optional<::ScriptingInputButtonState>>            mInputState;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
