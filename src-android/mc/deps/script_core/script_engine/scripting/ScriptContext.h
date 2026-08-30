#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPayload; }
namespace Scripting { class IRuntime; }
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class ResultAny; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Scripting {

class ScriptContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::IRuntime>>        mRuntime;
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>                       mContextId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::LifetimeRegistry>> mRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptContext();

    MCNAPI ScriptContext(
        std::shared_ptr<Scripting::IRuntime>,
        ::Scripting::ContextId,
        std::unique_ptr<Scripting::LifetimeRegistry>
    );

    MCNAPI void _destroy();

    MCNAPI ::Scripting::ContextId getContextId() const;

    MCNAPI ::Scripting::LifetimeRegistry* getLifetimeRegistry() const;

    MCNAPI ::Scripting::IRuntime* getRuntime();

    MCNAPI ::Scripting::WeakLifetimeScope getWeakLifetimeScope() const;

    MCNAPI ::Scripting::ScriptContext& operator=(::Scripting::ScriptContext&&);

    MCNAPI ::Scripting::ResultAny run(::Scripting::IPayload&, std::optional<Scripting::Privilege>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(
        std::shared_ptr<Scripting::IRuntime>,
        ::Scripting::ContextId,
        std::unique_ptr<Scripting::LifetimeRegistry>
    );
    // NOLINTEND
};

} // namespace Scripting
