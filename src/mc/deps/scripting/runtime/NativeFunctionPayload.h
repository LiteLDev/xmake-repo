#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/IPayload.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPrinter; }
namespace Scripting { class NativeRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct ModuleBindingBundle; }
// clang-format on

#endif // @header-generator platform
namespace Scripting {

#if defined(LL_PLAT_C) // @header-generator platform
class NativeFunctionPayload {};
#else // @header-generator platform
class NativeFunctionPayload : public ::Scripting::IPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::Scripting::ResultAny(
            ::Scripting::NativeRuntime&,
            ::Scripting::ContextId,
            ::Scripting::WeakLifetimeScope,
            ::Scripting::ModuleBindingBundle const&,
            ::Scripting::IDependencyLoader*,
            ::Scripting::IPrinter*
        )>>
        mFunction;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NativeFunctionPayload() /*override*/ = default;

    virtual ::Scripting::ResultAny runOn(
        ::Scripting::ContextId      contextId,
        ::Scripting::NativeRuntime& runtime,
        ::std::optional<::Scripting::Privilege>
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::ResultAny $runOn(
        ::Scripting::ContextId      contextId,
        ::Scripting::NativeRuntime& runtime,
        ::std::optional<::Scripting::Privilege>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace Scripting
#endif // @header-generator platform
