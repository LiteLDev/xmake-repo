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
    // prevent constructor by default
    ActorComponentFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorComponentFactory();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _initialize(::Experiments const&);

    MCNAPI void _initializeComponentDefinitions(::Experiments const&);

    MCNAPI void _initializePropertyDefinitions(::Experiments const&);
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
