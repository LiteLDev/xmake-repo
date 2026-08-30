#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/ExternalContentManager.h"
#include "mc/deps/core/file/Path.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

namespace ImportCompleteStep {

struct FinalizeTaskData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::TaskGroup&> mTaskGroup;
    ::ll::UntypedStorage<8, 8>             mLoadingContent;
    ::ll::UntypedStorage<1, 24>            mManifestPath;
    ::ll::UntypedStorage<1, 24>            mPackBaseFolder;
    ::ll::UntypedStorage<8, 56>            mLoadingData;
    ::ll::TypedStorage<1, 1, bool const>   mFromTemp;
    ::ll::TypedStorage<1, 1, bool const>   mIsZipStrategy;
    // NOLINTEND

public:
    // prevent constructor by default
    FinalizeTaskData& operator=(FinalizeTaskData const&);
    FinalizeTaskData(FinalizeTaskData const&);
    FinalizeTaskData();
};

} // namespace ImportCompleteStep
