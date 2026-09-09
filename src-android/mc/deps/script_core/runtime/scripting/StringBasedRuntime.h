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
    // clang-format off
    virtual ::Scripting::ResultAny run(::Scripting::ContextId, ::Scripting::IPayload*, std::optional<Scripting::Privilege>);

    virtual ::Scripting::ResultAny runString(::Scripting::ContextId, std::string const&, std::string const&, std::optional<Scripting::Privilege>) = 0;
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::ResultAny
    $run(::Scripting::ContextId, ::Scripting::IPayload*, std::optional<Scripting::Privilege>);
    // NOLINTEND
};

} // namespace Scripting
