#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ScreenPhase.h"

namespace OreUI {

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

} // namespace OreUI
