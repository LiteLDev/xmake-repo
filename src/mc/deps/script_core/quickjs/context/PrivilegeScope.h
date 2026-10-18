#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/runtime/scripting/RequiredPrivileges.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::QuickJS { class ContextUserData; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

class PrivilegeScope {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::QuickJS::ContextUserData*>       mContextUserData;
    ::ll::TypedStorage<1, 2, std::optional<Scripting::RequiredPrivileges>> mRestorePrivileges;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkf87478;
    ::ll::UntypedStorage<1, 2> mUnk80be42;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PrivilegeScope& operator=(PrivilegeScope const&);
    PrivilegeScope(PrivilegeScope const&);
#endif // @header-generator platform
    PrivilegeScope();
};

} // namespace Scripting::QuickJS
