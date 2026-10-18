#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ScreenPhase.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ScreenPhase.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct ScreenPerformanceSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, ::OreUI::ScreenPhase> lastPhase;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1000000000>>>> lastFrameTime;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1000000000>>>> lastAdvanceDuration;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1000000000>>>> meaningfulPaintWithRendering;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ScreenPerformanceSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::OreUI::ScreenPhase>                         lastPhase;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>> lastFrameTime;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>> lastAdvanceDuration;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>> meaningfulPaintWithRendering;
    // NOLINTEND
};
#else // @header-generator platform
struct ScreenPerformanceSnapshot {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
