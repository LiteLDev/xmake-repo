#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class OutputFileStream; }
namespace Core { class Path; }
// clang-format on

class ContentLogFileEndPoint : public ::ContentLogEndPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::OutputFileStream>> mFileStream;
    ::ll::UntypedStorage<8, 24>                                       mDebugLogDirectory;
    ::ll::UntypedStorage<8, 24>                                       mFilePath;
    ::ll::UntypedStorage<8, 24>                                       mDisplayFilePath;
    ::ll::TypedStorage<4, 4, uint>                                    mNumTimesOpened;
    ::ll::TypedStorage<1, 1, bool>                                    mIsEnabled;
    ::ll::TypedStorage<4, 8, std::optional<LogLevel>>                 mMinLogLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentLogFileEndPoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentLogFileEndPoint();

    virtual void log(::LogArea const, ::LogLevel const, char const*);

    virtual bool logOnlyOnce() const;

    virtual void flush();

    virtual void setEnabled(bool);

    virtual bool isEnabled() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContentLogFileEndPoint(::Core::Path, ::Core::Path, std::optional<LogLevel>);

    MCNAPI void deleteAllContentLogs() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getLogFileName() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string sanitizePathPrefixForDisplay(std::string_view);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& FILE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path, ::Core::Path, std::optional<LogLevel>);
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
