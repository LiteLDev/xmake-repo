#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/resources/PackAccessStrategyType.h"

struct InstalledPackDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                        mPackIdVersion;
    ::ll::TypedStorage<4, 4, ::PackAccessStrategyType> mAccessStrategyType;
    // NOLINTEND

public:
    // prevent constructor by default
    InstalledPackDetails& operator=(InstalledPackDetails const&);
    InstalledPackDetails();
};
