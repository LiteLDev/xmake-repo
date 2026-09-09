#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/gametest/framework/GameTestCompletedErrorReason.h"

namespace gametest {

struct GameTestCompletedError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::gametest::GameTestCompletedErrorReason> type;
    // NOLINTEND
};

} // namespace gametest
