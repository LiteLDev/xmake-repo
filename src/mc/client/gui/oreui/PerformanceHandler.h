#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/IPerformanceHandler.h"

// auto generated forward declare list
// clang-format off
namespace cohtml::Logging { class ILogHandler; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/IPerformanceHandler.h"

// auto generated forward declare list
// clang-format off
namespace cohtml::Logging { class ILogHandler; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    virtual ~PerformanceHandler() /*override*/ = default;

    virtual void WriteLog(char const* message, uint64 length) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $WriteLog(char const* message, uint64 length);
    // NOLINTEND
};
#else // @header-generator platform
class PerformanceHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
