#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/debug/log/ContextMessage.h"
#include "mc/deps/core/debug/log/ContextMessageLoggerOptions.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContextMessageLoggerOptions;
// clang-format on
#endif // @header-generator platform

class ContextMessageLogger {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ContextMessage>>   mMessageBufferArray;
    ::ll::TypedStorage<1, 5, bool[5]>                        mReceivedMessages;
    ::ll::TypedStorage<1, 14, ::ContextMessageLoggerOptions> mOptions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnka2c9cf;
    ::ll::UntypedStorage<1, 5>  mUnk522f81;
    ::ll::UntypedStorage<1, 14> mUnk15d953;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ContextMessageLogger& operator=(ContextMessageLogger const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ContextMessageLogger(ContextMessageLogger const&);
#endif // @header-generator platform
    ContextMessageLogger();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContextMessageLogger();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~ContextMessageLogger() = default;
#else // LL_PLAT_C
    virtual ~ContextMessageLogger();
#endif

#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ContextMessageLogger(::ContextMessageLoggerOptions const&);

    MCNAPI void log(::LogArea const, ::LogLevel const, char const*);

    MCNAPI bool shouldMessagePostToParentMessageLoggers();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit ContextMessageLogger(::ContextMessageLoggerOptions const& options);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ContextMessageLoggerOptions const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ContextMessageLoggerOptions const& options);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
