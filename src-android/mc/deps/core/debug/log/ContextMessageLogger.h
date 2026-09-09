#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContextMessage.h"
#include "mc/deps/core/debug/log/ContextMessageLoggerOptions.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

class ContextMessageLogger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ContextMessage>>   mMessageBufferArray;
    ::ll::TypedStorage<1, 5, bool[5]>                        mReceivedMessages;
    ::ll::TypedStorage<1, 14, ::ContextMessageLoggerOptions> mOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextMessageLogger& operator=(ContextMessageLogger const&);
    ContextMessageLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContextMessageLogger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ContextMessageLogger(::ContextMessageLoggerOptions const&);

    MCNAPI void log(::LogArea const, ::LogLevel const, char const*);

    MCNAPI bool shouldMessagePostToParentMessageLoggers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContextMessageLoggerOptions const&);
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
