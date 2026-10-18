#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/StackRefResult.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class IEntityRegistryOwner : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IEntityRegistryOwner() = default;
#else // @header-generator platform
    virtual ~IEntityRegistryOwner() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StackRefResult<const EntityRegistry> getEntityRegistry() const = 0;
#else // @header-generator platform
    virtual ::StackRefResult<::EntityRegistry> getEntityRegistry() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StackRefResult<EntityRegistry> getEntityRegistry() = 0;
#else // @header-generator platform
    virtual ::StackRefResult<::EntityRegistry const> getEntityRegistry() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
