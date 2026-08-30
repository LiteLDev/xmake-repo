#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectFactory; }
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
// clang-format on

namespace Scripting {

class ScriptObjectFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::IRuntime&>                     mRuntime;
    ::ll::TypedStorage<8, 8, ::Scripting::IObjectInspector&>             mInspector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::IObjectFactory>> mFactory;
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>                     mContextId;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>            mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptObjectFactory();
};

} // namespace Scripting
