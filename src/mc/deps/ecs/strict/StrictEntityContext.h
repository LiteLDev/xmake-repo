#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class StrictEntityContext {
public:
    // StrictEntityContext inner types declare
    // clang-format off
    struct Hash;
    // clang-format on

    // StrictEntityContext inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Hash {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ulong operator()(::StrictEntityContext const&) const;
        // NOLINTEND
    };
#else // @header-generator platform
    struct Hash {};
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::EntityId> mEntity;
    ::ll::TypedStorage<4, 4, uint>       mRegistryId;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StrictEntityContext();

    MCNAPI StrictEntityContext(::StrictEntityContext&&);

    MCNAPI ::EntityId _getEntityId() const;

    MCNAPI uint _getRegistryId() const;

    MCNAPI bool isNull() const;

    MCNAPI bool operator!=(::StrictEntityContext const&) const;

    MCNAPI ::StrictEntityContext& operator=(::StrictEntityContext&&);

    MCNAPI bool operator==(::StrictEntityContext const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::StrictEntityContext&&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
