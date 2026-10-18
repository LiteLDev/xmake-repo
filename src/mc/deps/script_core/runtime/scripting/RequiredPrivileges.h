#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

class RequiredPrivileges {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Scripting::Privilege> mPrivileges;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkfd639e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RequiredPrivileges& operator=(RequiredPrivileges const&);
    RequiredPrivileges(RequiredPrivileges const&);
    RequiredPrivileges();
#endif // @header-generator platform
};

} // namespace Scripting
