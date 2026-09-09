#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackIdVersion.h"

struct ServicePack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mIdVersion;
    ::ll::UntypedStorage<8, 24> mDownloadUrl;
    // NOLINTEND

public:
    // prevent constructor by default
    ServicePack();
};
