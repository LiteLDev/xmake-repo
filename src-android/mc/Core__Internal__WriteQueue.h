#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileType.h"

// auto generated forward declare list
// clang-format off
namespace Core::Internal { class DirectoryData; }
namespace Core::Internal { class FileData; }
namespace Core::Internal { class WriteAppendEvent; }
namespace Core::Internal { template<auto T0> class DeleteEntryEvent; }
namespace Core::Internal { template<typename T0> class CreateEntryEvent; }
namespace Core::Internal { template<typename T0> class ReferencingEvent; }
// clang-format on

namespace Core::Internal {

class WriteQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mQueue;
    // NOLINTEND
};

} // namespace Core::Internal
