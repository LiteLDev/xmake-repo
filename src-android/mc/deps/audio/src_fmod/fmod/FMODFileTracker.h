#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FMODFileDescriptor;
// clang-format on

class FMODFileTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<void*, std::shared_ptr<FMODFileDescriptor>>> mFileDescriptorsMap;
    ::ll::TypedStorage<4, 40, std::mutex>                                                     mMutex;
    // NOLINTEND
};
