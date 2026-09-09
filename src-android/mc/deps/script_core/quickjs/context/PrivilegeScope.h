#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/RequiredPrivileges.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::QuickJS { class ContextUserData; }
// clang-format on

namespace Scripting::QuickJS {

class PrivilegeScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::QuickJS::ContextUserData*>       mContextUserData;
    ::ll::TypedStorage<1, 2, std::optional<Scripting::RequiredPrivileges>> mRestorePrivileges;
    // NOLINTEND

public:
    // prevent constructor by default
    PrivilegeScope();
};

} // namespace Scripting::QuickJS
