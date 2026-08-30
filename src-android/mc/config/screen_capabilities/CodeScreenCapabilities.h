#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct CodeScreenCapabilities : public ::TypedScreenCapabilities<CodeScreenCapabilities> {
public:
    // prevent constructor by default
    CodeScreenCapabilities& operator=(CodeScreenCapabilities const&);
    CodeScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CodeScreenCapabilities();
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
