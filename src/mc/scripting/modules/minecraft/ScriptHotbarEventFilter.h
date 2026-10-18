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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, ::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilterProcessedData> mProcessedData;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<int>>> mAllowedSlots;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilterProcessedData>
                                                                   mProcessedData;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<int>>> mAllowedSlots;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptHotbarEventFilter();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void process();
#else // @header-generator platform
    MCAPI ScriptHotbarEventFilter(::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilterData const&) const;
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter&
    operator=(::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptHotbarEventFilter();
#else // @header-generator platform
    MCAPI ~ScriptHotbarEventFilter();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::EventFilters::ScriptHotbarEventFilter const&);
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
