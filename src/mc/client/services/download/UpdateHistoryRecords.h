#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

struct UpdateHistoryRecords {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mFilepath;
    ::ll::UntypedStorage<8, 16> mRootRecordObj;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateHistoryRecords();
};
#else // @header-generator platform
struct UpdateHistoryRecords {};
#endif // @header-generator platform
