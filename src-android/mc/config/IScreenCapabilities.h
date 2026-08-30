#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

class IScreenCapabilities {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScreenCapabilities();

    virtual bool isOfType(::Bedrock::typeid_t<IScreenCapabilities>) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
