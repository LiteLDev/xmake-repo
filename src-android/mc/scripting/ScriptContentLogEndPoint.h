#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

// auto generated forward declare list
// clang-format off
class ScriptDebugger;
// clang-format on

class ScriptContentLogEndPoint : public ::ContentLogEndPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptDebugger&> mDebugger;
    ::ll::TypedStorage<1, 1, bool>              mEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContentLogEndPoint& operator=(ScriptContentLogEndPoint const&);
    ScriptContentLogEndPoint(ScriptContentLogEndPoint const&);
    ScriptContentLogEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptContentLogEndPoint();

    virtual void log(::LogArea const, ::LogLevel const, char const*);

    virtual bool logOnlyOnce() const;

    virtual void flush();

    virtual void setEnabled(bool);

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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $log(::LogArea const, ::LogLevel const, char const*);

    MCNAPI bool $logOnlyOnce() const;

    MCNAPI void $flush();

    MCNAPI void $setEnabled(bool);

    MCNAPI bool $isEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
