#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
// clang-format on

class IEntityInitializer {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IEntityInitializer();
#else // @header-generator platform
    virtual ~IEntityInitializer() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void entityInitializer(std::unique_ptr<Actor>, ::EntityContext&, ::EntityContext const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void entityInitializer(::std::unique_ptr<::Actor>, ::EntityContext&, ::EntityContext const&) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
