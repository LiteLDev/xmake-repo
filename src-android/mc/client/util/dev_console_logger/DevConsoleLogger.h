#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/OutputFileStream.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/util/TimerFacade.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class DevConsoleLogger : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                                             mLogFolder;
    ::ll::UntypedStorage<8, 304>                                                                            mLogFile;
    ::ll::TypedStorage<8, 280, std::basic_stringstream<char, std::char_traits<char>, std::allocator<char>>> mFileBuffer;
    ::ll::UntypedStorage<8, 24>                                                                             mTimeStamp;
    ::ll::UntypedStorage<8, 48> mGetTestBuildIDCallback;
    ::ll::UntypedStorage<8, 48> mIsAutomationRunCallback;
    ::ll::UntypedStorage<8, 64> mTimerFacade;
    // NOLINTEND

public:
    // prevent constructor by default
    DevConsoleLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DevConsoleLogger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DevConsoleLogger(
        std::function<std::string()>,
        std::function<bool()>,
        ::Core::Path const&,
        std::string const&,
        int const
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::function<std::string()>, std::function<bool()>, ::Core::Path const&, std::string const&, int const);
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
