#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityComponentFactoryJson.h"

// auto generated forward declare list
// clang-format off
class Experiments;
// clang-format on

class ActorComponentFactory : public ::EntityComponentFactoryJson {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ActorComponentFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorComponentFactory();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initialize(::Experiments const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _initialize(::Experiments const& experiments);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initializeComponentDefinitions(::Experiments const&);
#else // @header-generator platform
    MCAPI void _initializeComponentDefinitions(::Experiments const& experiments);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initializePropertyDefinitions(::Experiments const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void _initializePropertyDefinitions(::Experiments const& experiments);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
