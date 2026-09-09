#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

namespace Core {

class TransactionFrameSourceTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1032>                                    mSource;
    ::ll::UntypedStorage<8, 1032>                                    mTarget;
    ::ll::TypedStorage<1, 1, bool>                                   mSameStorageArea;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileSystemImpl>> mSourceTransaction;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileSystemImpl>> mTargetTransaction;
    ::ll::UntypedStorage<8, 72>                                      mResult;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionFrameSourceTarget();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TransactionFrameSourceTarget();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result exec(
        ::Core::PathView,
        ::Core::PathView,
        std::function<Core::Result(Core::TransactionFrameSourceTarget&)>,
        std::function<Core::Result(Core::TransactionFrameSourceTarget&)>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
