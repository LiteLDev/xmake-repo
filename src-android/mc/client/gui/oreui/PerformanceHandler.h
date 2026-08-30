#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/IPerformanceHandler.h"

// auto generated forward declare list
// clang-format off
namespace cohtml::Logging { class ILogHandler; }
// clang-format on

namespace OreUI {

class PerformanceHandler : public ::cohtml::Profile::IPerformanceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::Logging::ILogHandler&> mLogHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    PerformanceHandler& operator=(PerformanceHandler const&);
    PerformanceHandler(PerformanceHandler const&);
    PerformanceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PerformanceHandler();

    virtual void WriteLog(char const*, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $WriteLog(char const*, ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
