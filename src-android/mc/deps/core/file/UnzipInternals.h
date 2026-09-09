#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class UnzipInternals {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*> mZipFile;
    // NOLINTEND

public:
    // prevent constructor by default
    UnzipInternals();
};

} // namespace Core
