#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IRealmEventLogger {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRealmEventLogger();

    virtual void logEvent(std::string const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
