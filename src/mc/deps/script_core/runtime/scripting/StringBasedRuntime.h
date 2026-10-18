#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/IRuntime.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPayload; }
namespace Scripting { class ResultAny; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class StringBasedRuntime : public ::Scripting::IRuntime {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::Scripting::ResultAny run(::Scripting::ContextId, ::Scripting::IPayload*, std::optional<Scripting::Privilege>);
#else // @header-generator platform
    virtual ::Scripting::ResultAny
    run(::Scripting::ContextId                  contextId,
        ::Scripting::IPayload*                  payload,
        ::std::optional<::Scripting::Privilege> privilege) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::ResultAny runString(::Scripting::ContextId, std::string const&, std::string const&, std::optional<Scripting::Privilege>) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Scripting::ResultAny runString(
        ::Scripting::ContextId                  contextId,
        ::std::string const&                    scriptName,
        ::std::string const&                    scriptData,
        ::std::optional<::Scripting::Privilege> privilege
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ResultAny
    $run(::Scripting::ContextId, ::Scripting::IPayload*, std::optional<Scripting::Privilege>);
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny $run(
        ::Scripting::ContextId                  contextId,
        ::Scripting::IPayload*                  payload,
        ::std::optional<::Scripting::Privilege> privilege
    );


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
