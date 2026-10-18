#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ScriptDebugger;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class ScriptContentLogEndPoint : public ::ContentLogEndPoint {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ScriptDebugger&> mDebugger;
    ::ll::TypedStorage<1, 1, bool>              mEnabled;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk56e480;
    ::ll::UntypedStorage<1, 1> mUnk195740;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContentLogEndPoint& operator=(ScriptContentLogEndPoint const&);
    ScriptContentLogEndPoint(ScriptContentLogEndPoint const&);
    ScriptContentLogEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptContentLogEndPoint();
#else // @header-generator platform
    virtual ~ScriptContentLogEndPoint() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void log(::LogArea const, ::LogLevel const, char const*);
#else // @header-generator platform
    virtual void log(::LogArea const, ::LogLevel const logLevel, char const* message) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool logOnlyOnce() const;
#else // @header-generator platform
    virtual bool logOnlyOnce() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flush();
#else // @header-generator platform
    virtual void flush() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setEnabled(bool);
#else // @header-generator platform
    virtual void setEnabled(bool newState) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isEnabled() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptContentLogEndPoint(::ScriptDebugger&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebugger&);
#else // @header-generator platform
    virtual bool isEnabled() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $log(::LogArea const, ::LogLevel const, char const*);
#else // @header-generator platform
    MCNAPI void $log(::LogArea const, ::LogLevel const logLevel, char const* message);
#endif // @header-generator platform

    MCNAPI bool $logOnlyOnce() const;

    MCNAPI void $flush();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setEnabled(bool);
#else // @header-generator platform
    MCNAPI void $setEnabled(bool newState);
#endif // @header-generator platform

    MCNAPI bool $isEnabled() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
