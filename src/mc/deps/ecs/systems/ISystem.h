#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ISystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISystem() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerEvents(::entt::basic_dispatcher<std::allocator<void>>&);
#else // @header-generator platform
    virtual void registerEvents(::entt::dispatcher& dispatcher);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerEvents(::entt::basic_dispatcher<std::allocator<void>>&);
#else // @header-generator platform
    MCFOLD void $registerEvents(::entt::dispatcher& dispatcher);


#endif // @header-generator platform
    // NOLINTEND
};
