#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"
#include "mc/scripting/modules/minecraft/ScriptItemFilter.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft::EventFilters { struct ScriptActorItemPickupEventFilterData; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorItemPickupEventFilter {
public:
    // ScriptActorItemPickupEventFilter inner types define
    using Data = ::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 416, std::optional<ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    ::ll::TypedStorage<8, 80, std::optional<ScriptModuleMinecraft::ScriptItemFilter>>   mItemFilter;
#else // @header-generator platform
    ::ll::TypedStorage<8, 432, ::std::optional<::ScriptModuleMinecraft::ScriptActorFilter>> mActorFilter;
    ::ll::TypedStorage<8, 80, ::std::optional<::ScriptModuleMinecraft::ScriptItemFilter>>   mItemFilter;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptActorItemPickupEventFilter();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isActorAllowed(::Actor const&) const;
#else // @header-generator platform
    MCFOLD bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData const& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptActorItemPickupEventFilterData const&);

    MCNAPI ~ScriptActorItemPickupEventFilter();
#else // @header-generator platform
    MCAPI ~ScriptActorItemPickupEventFilter();
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
