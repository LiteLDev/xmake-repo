#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class NativeRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class StringBasedRuntime; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class IPayload {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IPayload() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny runOn(::Scripting::ContextId, ::Scripting::StringBasedRuntime&, std::optional<Scripting::Privilege>);
#else // @header-generator platform
    virtual ::Scripting::ResultAny
    runOn(::Scripting::ContextId, ::Scripting::NativeRuntime&, ::std::optional<::Scripting::Privilege>);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny runOn(::Scripting::ContextId, ::Scripting::NativeRuntime&, std::optional<Scripting::Privilege>);
    // clang-format on
#else // @header-generator platform
    virtual ::Scripting::ResultAny runOn(
        ::Scripting::ContextId                  contextId,
        ::Scripting::StringBasedRuntime&        runtime,
        ::std::optional<::Scripting::Privilege> privilege
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::ResultAny
#if defined(LL_PLAT_A) // @header-generator platform
    $runOn(::Scripting::ContextId, ::Scripting::NativeRuntime&, std::optional<Scripting::Privilege>);
#else // @header-generator platform
    $runOn(::Scripting::ContextId, ::Scripting::NativeRuntime&, ::std::optional<::Scripting::Privilege>);

#ifdef LL_PLAT_S
    MCNAPI ::Scripting::ResultAny $runOn(
        ::Scripting::ContextId                  contextId,
        ::Scripting::StringBasedRuntime&        runtime,
        ::std::optional<::Scripting::Privilege> privilege
    );
#endif


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
