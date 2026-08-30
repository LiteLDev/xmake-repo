#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InstructionalContentQueryContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>   mOnComplete;
    ::ll::TypedStorage<4, 4, int> mLibrarySkip;
    ::ll::UntypedStorage<4, 12>   mChannelSkip;
    // NOLINTEND

public:
    // prevent constructor by default
    InstructionalContentQueryContext();
};
