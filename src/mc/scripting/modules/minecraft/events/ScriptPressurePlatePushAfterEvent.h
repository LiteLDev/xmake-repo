#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptPressurePlatePushAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPressurePlatePushAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptPressurePlatePushAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPreviousRedstonePower;
    ::ll::TypedStorage<4, 4, int> mRedstonePower;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>   mSource;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mSource;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPressurePlatePushAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPressurePlatePushAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI ScriptPressurePlatePushAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                                scope
#endif // @header-generator platform
    );
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
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPressurePlatePushAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                                scope
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
