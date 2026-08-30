#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/WorldTemplateManagerProxyCallbacks.h"

// auto generated forward declare list
// clang-format off
struct WorldTemplateInfo;
namespace mce { class UUID; }
// clang-format on

class WorldTemplateManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManagerProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldTemplateManagerProxy(::WorldTemplateManagerProxyCallbacks const&);

    MCNAPI ~WorldTemplateManagerProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldTemplateManagerProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
