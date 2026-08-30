#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class EntityId;
// clang-format on

class RenderChunkPerformanceData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<entt::basic_registry<EntityId, std::allocator<EntityId>>>> mRegistry;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderChunkPerformanceData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void destroy(::EntityId const&);

    MCNAPI bool isValid(::EntityId const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
