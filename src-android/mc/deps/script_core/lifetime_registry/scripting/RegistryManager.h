#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ContextIdFreeList.h"
#include "mc/deps/script_core/lifetime_registry/scripting/LifetimeRegistryReference.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class RegistryManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::ContextIdFreeList>                          mContextIdFreeList;
    ::ll::TypedStorage<8, 4080, std::array<Scripting::LifetimeRegistryReference, 255>> mRegistryRefs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RegistryManager();

    MCNAPI std::unique_ptr<Scripting::LifetimeRegistry> createLifetimeRegistry();

    MCNAPI ::Scripting::LifetimeRegistry* getRegistryByContextId(::Scripting::ContextId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Scripting
