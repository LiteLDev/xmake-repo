#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct ContainerOutInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 8, ulong>        mUsedQuota;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerOutInfo& operator=(ContainerOutInfo const&);
    ContainerOutInfo(ContainerOutInfo const&);
    ContainerOutInfo();
};

} // namespace Core
