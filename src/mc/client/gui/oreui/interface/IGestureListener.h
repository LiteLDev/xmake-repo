#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IGestureListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGestureListener() = default;

    virtual void onPanRecognized(::Vec2 const& gestureBeginPos, ::Vec2 const& currentPos, ::Vec2 const& delta) = 0;

    virtual void onPanCompleted(::Vec2 const& endPos) = 0;

    virtual void
    onFlingCompleted(::Vec2 const& endPos, ::Vec2 const& flingStart, ::std::chrono::milliseconds flingDuration) = 0;

    virtual void onTapRecognized(::Vec2 const& position) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IGestureListener {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
