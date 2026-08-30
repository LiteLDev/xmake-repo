#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptPlayerUseNameTagIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerUseNameTagAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                           mPlayerHandle;
    ::ll::UntypedStorage<8, 32>                           mEntityNamed;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mPreviousName;
    ::ll::TypedStorage<8, 24, std::string>                mNewName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerUseNameTagAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerUseNameTagAfterEvent(::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent const&);

    MCNAPI ScriptPlayerUseNameTagAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData> const&,
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
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent const&);

    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptPlayerUseNameTagIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
