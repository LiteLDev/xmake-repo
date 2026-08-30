#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
struct WorldTemplateInfo;
// clang-format on

struct WorldTemplateManagerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mFindTemplateWithName;
    ::ll::UntypedStorage<8, 48> mFindInstalledWorldTemplateByUUID;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManagerProxyCallbacks& operator=(WorldTemplateManagerProxyCallbacks const&);
    WorldTemplateManagerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplateManagerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
