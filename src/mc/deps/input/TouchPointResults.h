#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/TouchEventResult.h"
#include "mc/deps/input/TouchPoint.h"
#include "mc/deps/input/TouchState.h"

class TouchPointResults {
public:
    // TouchPointResults inner types define
    using TouchEventResults = std::vector<std::pair<TouchPoint, TouchEventResult>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::pair<TouchPoint, TouchEventResult>>> _touchEventResults;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addPointer(int, ::TouchState, float, float, bool, bool);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/TouchEventResult.h"

// auto generated forward declare list
// clang-format off
struct TouchPoint;
// clang-format on

class TouchPointResults {
public:
    // TouchPointResults inner types define
    using TouchEventResults = ::std::vector<::std::pair<::TouchPoint, ::TouchEventResult>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::TouchPoint, ::TouchEventResult>>> _touchEventResults;
    // NOLINTEND
};
#else // @header-generator platform
class TouchPointResults {};
#endif // @header-generator platform
#endif // @header-generator platform
