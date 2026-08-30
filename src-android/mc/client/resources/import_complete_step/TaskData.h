#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/resource/PackType.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace ImportCompleteStep { class IImporters; }
// clang-format on

namespace ImportCompleteStep {

struct TaskData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                                    mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ImportCompleteStep::IImporters>> mImporters;
    ::ll::UntypedStorage<1, 24>                                               mPackOutputFolder;
    ::ll::UntypedStorage<1, 24>                                               mPackBaseFolder;
    ::ll::TypedStorage<8, 24, std::string const>                              mPackName;
    ::ll::TypedStorage<1, 1, ::PackType const>                                mPackType;
    ::ll::TypedStorage<1, 1, bool const>                                      mIsTitleLocked;
    ::ll::TypedStorage<1, 1, bool const>                                      mHasWarnings;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskData& operator=(TaskData const&);
    TaskData(TaskData const&);
    TaskData();
};

} // namespace ImportCompleteStep
