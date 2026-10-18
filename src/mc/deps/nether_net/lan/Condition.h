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

class Condition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<NetherNet::RunLoop::Variables> const> mSharedVariables;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkd51b0c;
    // NOLINTEND

public:
    // prevent constructor by default
    Condition& operator=(Condition const&);
    Condition(Condition const&);
    Condition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool StateDispatch(::std::unique_lock<::std::mutex>&& lock) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace NetherNet::RunLoop
