#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/common/GameUserType.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct UserCreationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameUserType>                    mUserType;
    ::ll::TypedStorage<4, 4, int>                               mControllerId;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IOptionRegistry>> mOptions;
    ::ll::TypedStorage<4, 4, uint>                              mId;
    // NOLINTEND
};
#else // @header-generator platform
struct UserCreationData {};
#endif // @header-generator platform

} // namespace Social
