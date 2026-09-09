#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GameUserType.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

namespace Social {

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

} // namespace Social
