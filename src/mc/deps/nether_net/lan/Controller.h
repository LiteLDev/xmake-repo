#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace NetherNet::RunLoop { struct Variables; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet::RunLoop {

class Controller {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<NetherNet::RunLoop::Variables> const> mSharedVariables;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkc1c0f9;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Controller& operator=(Controller const&);
    Controller(Controller const&);
    Controller();
#endif // @header-generator platform
};

} // namespace NetherNet::RunLoop
