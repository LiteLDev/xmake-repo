#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core::Internal { class DataSegment; }
namespace Core::Internal { class FileData; }
// clang-format on

namespace Core::Internal {

class WriteAppendEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                            mEventPath;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::Internal::FileData>>   mFileData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::Internal::DataSegment>> mData;
    ::ll::UntypedStorage<8, 48>                                            mProcessWriteFn;
    // NOLINTEND
};

} // namespace Core::Internal
