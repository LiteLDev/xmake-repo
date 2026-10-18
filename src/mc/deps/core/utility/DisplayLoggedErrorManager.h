#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/store/DisplayLoggedErrorType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
struct DisplayLoggedError;
// clang-format on

class DisplayLoggedErrorManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_set<ulong>> mHashCheck;
    ::ll::UntypedStorage<8, 24>                          mErrors;
    ::ll::UntypedStorage<8, 24>                          mFilePath;
    ::ll::TypedStorage<1, 1, bool>                       mHasWrittenToLogFile;
    ::ll::TypedStorage<1, 1, bool>                       mWriteToLogFile;
    ::ll::TypedStorage<4, 40, std::mutex>                mErrorManagerMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DisplayLoggedErrorManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DisplayLoggedErrorManager();

    MCNAPI explicit DisplayLoggedErrorManager(bool);

    MCNAPI void _writeLogMessage(std::string const&);

    MCNAPI std::string buildFullErrorLogMessage(::DisplayLoggedError) const;

    MCNAPI std::string getLogFilePath() const;

    MCNAPI void logErrorImpl(
        ::DisplayLoggedErrorType,
        bool,
        std::string const&,
        std::string const&,
        std::string const&,
        char const*,
        int,
        bool
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isAutomationRun();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(bool);
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
#else // @header-generator platform
class DisplayLoggedErrorManager {};
#endif // @header-generator platform
