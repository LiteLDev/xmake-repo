#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/OutputFileStream.h"
#include "mc/deps/core/profiler/LoadTimeData.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Core { class ScopedLoadTimeSection; }
// clang-format on

namespace Core {

class LoadTimeProfiler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Core::ScopedLoadTimeSection*>> mSections;
    ::ll::TypedStorage<4, 4, uint>                                       mCurrentFrame;
    ::ll::TypedStorage<8, 24, std::vector<Core::LoadTimeData>>           mFinishedSections;
    ::ll::UntypedStorage<8, 304>                                         mLogFile;
    ::ll::TypedStorage<1, 1, bool>                                       mEnabled;
    ::ll::TypedStorage<1, 1, bool>                                       mCloseLogOnUpdate;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LoadTimeProfiler();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LoadTimeProfiler();

    MCNAPI void endLogging();

    MCNAPI bool isLogging() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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

} // namespace Core
