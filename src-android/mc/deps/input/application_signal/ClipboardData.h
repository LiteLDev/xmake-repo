#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ApplicationSignal {

struct ClipboardData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::wstring> mData;
    // NOLINTEND
};

} // namespace ApplicationSignal
