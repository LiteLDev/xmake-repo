#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptPlayerEmoteIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerEmoteAfterEvent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptPlayerEmoteAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>            mPlayerHandle;
    ::ll::TypedStorage<8, 24, std::string> mEmotePieceId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
                                             mPlayerHandle;
    ::ll::TypedStorage<8, 32, ::std::string> mEmotePieceId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerEmoteAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPlayerEmoteAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI ScriptPlayerEmoteAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                                scope
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
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                                scope
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
