#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptEntityHitInformation.h"
#include "mc/scripting/modules/minecraft/events/ScriptProjectileHitInfoAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptProjectileHitIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitEntityAfterEvent : public ::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptProjectileHitEntityAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ScriptModuleMinecraft::ScriptEntityHitInformation> mEntityHitInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileHitEntityAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptProjectileHitEntityAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);
#else // @header-generator platform
    MCAPI ScriptProjectileHitEntityAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptProjectileHitEntityAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI ScriptProjectileHitEntityAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const& projectileHitEvent,
        ::Scripting::WeakLifetimeScope const&                                                  scope
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent&
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent&
#endif // @header-generator platform
    operator=(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const& projectileHitEvent,
        ::Scripting::WeakLifetimeScope const&                                                  scope
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
