#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources::PackDirectoryIterator {

enum class EventType : int {
    EnterPackDirectory    = 0,
    LeavePackDirectory    = 1,
    FileFound             = 2,
    FileFoundOutsidePacks = 3,
};

}
