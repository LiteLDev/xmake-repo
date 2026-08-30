#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/DataTracker.h"
#include "mc/client/gui/oreui/interface/ScreenPhase.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct ScopedFPSDataTracker; }
namespace OreUI { struct ScreenPerformanceSnapshot; }
// clang-format on

namespace OreUI {

class ScreenPerformanceTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 312, std::optional<OreUI::DataTracker>> mDataTracker;
    ::ll::TypedStorage<1, 1, bool> mUneventfulNavigation;
    ::ll::TypedStorage<1, 1, bool> mEventfulNavigation;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartFrameTime;
    ::ll::TypedStorage<1, 1, ::OreUI::ScreenPhase> mLastPhase;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastFrameTime;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastAdvanceDuration;
    ::ll::TypedStorage<1, 1, bool> mMeaningfulPaintEventReceived;
    ::ll::TypedStorage<1, 1, bool> mMeaningfulPaintWithRenderingSetThisFrame;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<OreUI::DataTracker> completeProfilingScope();

    MCNAPI void onAdvance(std::chrono::duration<long long, std::ratio<1, 1000000000>>);

    MCNAPI void onEventfulNavigation();

    MCNAPI void onFirstContentfulPaintEventReceived(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void onFirstMeaningfulPaintEventReceived(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void onPostRender(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void onSuspend();

    MCNAPI void onUneventfulNavigation();

    MCNAPI void startProfilingScope(
        std::string const&,
        std::string const&,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void tick(std::chrono::duration<long long, std::ratio<1, 1000000000>>, std::vector<std::string> const&);
    // NOLINTEND
};

} // namespace OreUI
