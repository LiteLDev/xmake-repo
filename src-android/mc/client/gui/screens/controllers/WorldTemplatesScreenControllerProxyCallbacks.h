#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
// clang-format on

struct WorldTemplatesScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSelectWorldTab;
    ::ll::UntypedStorage<8, 48> mSelectRealmsTab;
    ::ll::UntypedStorage<8, 48> mForceUIUpdate;
    ::ll::UntypedStorage<8, 48> mCreateWorldTemplate;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatesScreenControllerProxyCallbacks& operator=(WorldTemplatesScreenControllerProxyCallbacks const&);
    WorldTemplatesScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplatesScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
