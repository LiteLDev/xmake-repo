#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

namespace gametest {

class BaseGameTestHelper : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gametest::BaseGameTestInstance&> mTestInstance;
    ::ll::TypedStorage<4, 4, int const>                         mTickCount;
    ::ll::TypedStorage<4, 4, int const>                         mStartTick;
    ::ll::TypedStorage<4, 4, int const>                         mTimeoutTicks;
    ::ll::TypedStorage<1, 1, bool>                              mIsDone;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameTestHelper& operator=(BaseGameTestHelper const&);
    BaseGameTestHelper(BaseGameTestHelper const&);
    BaseGameTestHelper();
};

} // namespace gametest
