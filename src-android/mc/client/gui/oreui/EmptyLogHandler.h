#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/ILogHandler.h"
#include "mc/external/gameface/cohtml/Severity.h"

namespace OreUI {

class EmptyLogHandler : public ::cohtml::Logging::ILogHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmptyLogHandler();

    virtual void WriteLog(::cohtml::Logging::Severity, char const*, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $WriteLog(::cohtml::Logging::Severity, char const*, ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
