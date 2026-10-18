#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/containers/managers/controllers/FurnaceContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class SmokerContainerManagerModel;
// clang-format on

class SmokerContainerManagerController : public ::FurnaceContainerManagerController {
public:
    // prevent constructor by default
    SmokerContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SmokerContainerManagerController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SmokerContainerManagerController(std::weak_ptr<SmokerContainerManagerModel>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<SmokerContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class SmokerContainerManagerController {};
#endif // @header-generator platform
