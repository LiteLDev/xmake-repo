#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class OutputFileStream; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Path; }
// clang-format on

class ContentLogFileEndPoint : public ::ContentLogEndPoint {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::OutputFileStream>> mFileStream;
    ::ll::UntypedStorage<8, 24>                                       mDebugLogDirectory;
    ::ll::UntypedStorage<8, 24>                                       mFilePath;
    ::ll::UntypedStorage<8, 24>                                       mDisplayFilePath;
    ::ll::TypedStorage<4, 4, uint>                                    mNumTimesOpened;
    ::ll::TypedStorage<1, 1, bool>                                    mIsEnabled;
    ::ll::TypedStorage<4, 8, std::optional<LogLevel>>                 mMinLogLevel;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkd6cbc8;
    ::ll::UntypedStorage<8, 32> mUnk5cdc54;
    ::ll::UntypedStorage<8, 32> mUnk29444e;
    ::ll::UntypedStorage<8, 32> mUnk6f25b1;
    ::ll::UntypedStorage<4, 4>  mUnkbe8544;
    ::ll::UntypedStorage<1, 1>  mUnke5cbb0;
    ::ll::UntypedStorage<4, 8>  mUnk299ac4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ContentLogFileEndPoint& operator=(ContentLogFileEndPoint const&);
    ContentLogFileEndPoint(ContentLogFileEndPoint const&);
#endif // @header-generator platform
    ContentLogFileEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContentLogFileEndPoint();
#else // @header-generator platform
    virtual ~ContentLogFileEndPoint() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void log(::LogArea const, ::LogLevel const, char const*);
#else // @header-generator platform
    virtual void log(::LogArea const area, ::LogLevel const level, char const* message) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool logOnlyOnce() const;
#else // @header-generator platform
    virtual void flush() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void flush();
#else // @header-generator platform
    virtual void setEnabled(bool newState) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setEnabled(bool);
#else // @header-generator platform
    virtual bool isEnabled() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isEnabled() const;
#else // @header-generator platform
    virtual bool logOnlyOnce() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContentLogFileEndPoint(::Core::Path, ::Core::Path, std::optional<LogLevel>);
#else // @header-generator platform
    MCNAPI ContentLogFileEndPoint(
        ::Core::Path                debugLogDirectory,
        ::Core::Path                fileName,
        ::std::optional<::LogLevel> minLogLevel
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void deleteAllContentLogs() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getLogFileName() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void deleteAllContentLogs() const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string sanitizePathPrefixForDisplay(std::string_view);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& FILE_NAME();
#else // @header-generator platform
    MCNAPI static ::std::string sanitizePathPrefixForDisplay(::std::string_view text);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::Path, ::Core::Path, std::optional<LogLevel>);
#else // @header-generator platform
    MCNAPI void* $ctor(::Core::Path debugLogDirectory, ::Core::Path fileName, ::std::optional<::LogLevel> minLogLevel);
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

    MCNAPI bool $logOnlyOnce() const;
#else // @header-generator platform
    MCNAPI void $log(::LogArea const area, ::LogLevel const level, char const* message);
#endif // @header-generator platform

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
    MCNAPI bool $logOnlyOnce() const;


#endif // @header-generator platform
    // NOLINTEND
};
