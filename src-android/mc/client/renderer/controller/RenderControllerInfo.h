#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class RenderController;
// clang-format on

class RenderControllerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                   mName;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RenderController>> mPtr;
    // NOLINTEND
};
