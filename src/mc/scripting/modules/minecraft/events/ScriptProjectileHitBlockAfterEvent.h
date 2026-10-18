#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockHitInformation.h"
#include "mc/scripting/modules/minecraft/events/ScriptProjectileHitInfoAfterEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptProjectileHitIntermediateData; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent {
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
public:
    // ScriptProjectileHitBlockAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptProjectileHitIntermediateData;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ScriptModuleMinecraft::ScriptBlockHitInformation> mBlockHitInfo;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptProjectileHitBlockAfterEvent& operator=(ScriptProjectileHitBlockAfterEvent const&);
#endif // @header-generator platform
    ScriptProjectileHitBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptProjectileHitBlockAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent const&);

    MCNAPI ScriptProjectileHitBlockAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
#else // @header-generator platform
    MCAPI ScriptProjectileHitBlockAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent const&);
#endif // @header-generator platform
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent const&);

    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptProjectileHitIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
