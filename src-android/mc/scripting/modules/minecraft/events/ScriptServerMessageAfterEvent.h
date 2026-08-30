#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptServerMessageIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptServerMessageAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 24, std::string> mValue;
    ::ll::UntypedStorage<8, 32>            mPlayerHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerMessageAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptServerMessageAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptServerMessageIntermediateData> const&,
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
        std::shared_ptr<ScriptModuleMinecraft::ScriptServerMessageIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
