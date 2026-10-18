#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/events/IBrazeEventListener.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class BrazeSDKManager;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace BrazeEventListener {

#if defined(LL_PLAT_A) // @header-generator platform
class ListenerImpl : public ::IBrazeEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>            mSDK;
    ::ll::UntypedStorage<8, 64>            mGetPrimaryUserID;
    ::ll::TypedStorage<1, 1, bool const>   mIsBrazeEnabled;
    ::ll::TypedStorage<8, 24, std::string> mLastSentID;
    // NOLINTEND
};
#else // @header-generator platform
class ListenerImpl {};
#endif // @header-generator platform

} // namespace BrazeEventListener
