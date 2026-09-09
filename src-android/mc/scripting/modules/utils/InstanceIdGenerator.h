#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/utils/IInstanceIdGenerator.h"

struct InstanceIdGenerator : public ::IInstanceIdGenerator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InstanceIdGenerator();

    virtual uint generate();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InstanceIdGenerator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint $generate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
