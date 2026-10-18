#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/ILogHandler.h"
#include "mc/external/gameface/cohtml/Severity.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/ILogHandler.h"
#include "mc/external/gameface/cohtml/Severity.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class EmptyLogHandler : public ::cohtml::Logging::ILogHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmptyLogHandler() /*override*/ = default;

    virtual void WriteLog(::cohtml::Logging::Severity severity, char const* message, uint64 length) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $WriteLog(::cohtml::Logging::Severity severity, char const* message, uint64 length);
    // NOLINTEND
};
#else // @header-generator platform
class EmptyLogHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
