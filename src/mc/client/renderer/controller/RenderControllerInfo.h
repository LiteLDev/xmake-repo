#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderControllerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkab5859;
    ::ll::UntypedStorage<8, 8>  mUnk78bdce;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControllerInfo& operator=(RenderControllerInfo const&);
    RenderControllerInfo(RenderControllerInfo const&);
    RenderControllerInfo();
};
#else // @header-generator platform
class RenderControllerInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
