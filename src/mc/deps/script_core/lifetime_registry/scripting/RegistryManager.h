#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ContextIdFreeList.h"
#include "mc/deps/script_core/lifetime_registry/scripting/LifetimeRegistryReference.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct ContextId; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Scripting {

class RegistryManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::ContextIdFreeList>                          mContextIdFreeList;
    ::ll::TypedStorage<8, 4080, std::array<Scripting::LifetimeRegistryReference, 255>> mRegistryRefs;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>   mUnkfe9f34;
    ::ll::UntypedStorage<8, 4080> mUnk15b833;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RegistryManager& operator=(RegistryManager const&);
    RegistryManager(RegistryManager const&);
    RegistryManager();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RegistryManager();

    MCNAPI std::unique_ptr<Scripting::LifetimeRegistry> createLifetimeRegistry();

    MCNAPI ::Scripting::LifetimeRegistry* getRegistryByContextId(::Scripting::ContextId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::Scripting::LifetimeRegistry> createLifetimeRegistry();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
