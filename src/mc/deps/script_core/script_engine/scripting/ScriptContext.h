#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPayload; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class IRuntime; }
namespace Scripting { class LifetimeRegistry; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ResultAny; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Scripting {

class ScriptContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::IRuntime>>        mRuntime;
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>                       mContextId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::LifetimeRegistry>> mRegistry;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk673a09;
    ::ll::UntypedStorage<1, 1>  mUnkac9107;
    ::ll::UntypedStorage<8, 8>  mUnkabfb64;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptContext& operator=(ScriptContext const&);
    ScriptContext(ScriptContext const&);
    ScriptContext();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptContext();

    MCNAPI ScriptContext(
        std::shared_ptr<Scripting::IRuntime>,
        ::Scripting::ContextId,
        std::unique_ptr<Scripting::LifetimeRegistry>
    );

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void _destroy();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ContextId getContextId() const;
#else // @header-generator platform
    MCNAPI ::Scripting::ScriptContext& operator=(::Scripting::ScriptContext&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny
    run(::Scripting::IPayload& payload, ::std::optional<::Scripting::Privilege> privilege);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
