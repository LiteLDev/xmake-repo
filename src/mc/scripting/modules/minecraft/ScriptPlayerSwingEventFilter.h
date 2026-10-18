#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/items/ScriptHeldItemOption.h"
#include "mc/world/actor/ActorSwingSource.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptPlayerSwingEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptPlayerSwingEventFilter {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, std::optional<ScriptModuleMinecraft::ScriptHeldItemOption>> mHeldItemOption;
    ::ll::TypedStorage<1, 2, std::optional<ActorSwingSource>>                            mSwingSource;
    // NOLINTEND
#else // @header-generator platform
    // ScriptPlayerSwingEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptPlayerSwingEventFilterData;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // member variables
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptPlayerSwingEventFilterData const&) const;
#else // @header-generator platform
    ::ll::TypedStorage<1, 2, ::std::optional<::ScriptModuleMinecraft::ScriptHeldItemOption>> mHeldItemOption;
    ::ll::TypedStorage<1, 2, ::std::optional<::ActorSwingSource>>                            mSwingSource;
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
