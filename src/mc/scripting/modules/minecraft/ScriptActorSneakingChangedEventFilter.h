#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorSneakingChangedEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorSneakingChangedEventFilter {
public:
    // ScriptActorSneakingChangedEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptActorSneakingChangedEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 416, std::optional<ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorSneakingChangedEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isActorAllowed(::Actor const&) const;

    MCNAPI bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorSneakingChangedEventFilterData const&) const;
#else // @header-generator platform
    ::ll::TypedStorage<8, 432, ::std::optional<::ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
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
