#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

namespace OreUI {

class IGestureListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IGestureListener() = default;

    virtual void onPanRecognized(::Vec2 const&, ::Vec2 const&, ::Vec2 const&) = 0;

    virtual void onPanCompleted(::Vec2 const&) = 0;

    virtual void onFlingCompleted(::Vec2 const&, ::Vec2 const&, std::chrono::duration<long long, std::ratio<1, 1000>>) = 0;

    virtual void onTapRecognized(::Vec2 const&) = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace OreUI
