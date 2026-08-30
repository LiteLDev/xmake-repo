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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>            mPlayerHandle;
    ::ll::TypedStorage<8, 24, std::string> mEmotePieceId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerEmoteAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerEmoteAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerEmoteIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
