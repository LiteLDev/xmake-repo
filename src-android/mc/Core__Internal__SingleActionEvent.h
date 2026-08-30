#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/throttled_filesystem/internal/EntryTable.h"
#include "mc/platform/Result.h"

namespace Core::Internal {

class SingleActionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>    mEventPath;
    ::ll::UntypedStorage<8, 24>    mTargetEventPath;
    ::ll::UntypedStorage<8, 48>    mProcessFn;
    ::ll::TypedStorage<1, 1, bool> mCompleted;
    ::ll::TypedStorage<1, 1, bool> mVirtual;
    ::ll::UntypedStorage<8, 8>     mQueuedRemovalRefCounter;
    // NOLINTEND
};

} // namespace Core::Internal
