#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"
#include "mc/scripting/modules/minecraft/ScriptContainerAccessSourceFilter.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
namespace ScriptModuleMinecraft { struct ScriptActorData; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorContainerAccessEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorContainerAccessEventFilter {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptActorContainerAccessEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptActorContainerAccessEventFilterData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 416, std::optional<ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    ::ll::TypedStorage<8, 424, std::optional<ScriptModuleMinecraft::EventFilters::ScriptContainerAccessSourceFilter>> mAccessSourceFilter;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 432, ::std::optional<::ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    ::ll::
        TypedStorage<8, 440, ::std::optional<::ScriptModuleMinecraft::EventFilters::ScriptContainerAccessSourceFilter>>
            mAccessSourceFilter;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorContainerAccessEventFilter(
        ::ScriptModuleMinecraft::EventFilters::ScriptActorContainerAccessEventFilter const&
    );

    MCNAPI bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorContainerAccessEventFilterData const&) const;

    MCNAPI ~ScriptActorContainerAccessEventFilter();
#else // @header-generator platform
    MCAPI bool
    shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorContainerAccessEventFilterData const& data) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptActorContainerAccessEventFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
