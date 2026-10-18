#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/items/ScriptItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorSwingSource.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSwingStartIntermediateData; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerSwingStartAfterEvent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                  mPlayerHandle;
    ::ll::UntypedStorage<8, 40>                  mHeldItemStack;
    ::ll::TypedStorage<1, 1, ::ActorSwingSource> mSwingSource;
    // NOLINTEND
#else // @header-generator platform
    // ScriptPlayerSwingStartAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptPlayerSwingStartAfterEvent();

public:
    // member functions
#else // @header-generator platform
    // member variables
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPlayerSwingStartAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
        mPlayerHandle;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
                                                 mHeldItemStack;
    ::ll::TypedStorage<1, 1, ::ActorSwingSource> mSwingSource;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerSwingStartIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
