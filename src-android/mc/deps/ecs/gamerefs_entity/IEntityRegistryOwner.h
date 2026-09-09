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
    virtual ~IEntityRegistryOwner() = default;

    virtual ::StackRefResult<const EntityRegistry> getEntityRegistry() const = 0;

    virtual ::StackRefResult<EntityRegistry> getEntityRegistry() = 0;
    // NOLINTEND
};
