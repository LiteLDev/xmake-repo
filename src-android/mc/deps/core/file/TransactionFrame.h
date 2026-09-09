#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

namespace Core {

class TransactionFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileSystemImpl>> mTransaction;
    ::ll::UntypedStorage<8, 1032>                                    mCleanPath;
    ::ll::UntypedStorage<8, 72>                                      mResult;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionFrame();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TransactionFrame(::Core::FileAccessType, ::Core::PathView);

    MCNAPI ~TransactionFrame();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::FileAccessType, ::Core::PathView);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
