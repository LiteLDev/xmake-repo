#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/DataTracker.h"
#include "mc/client/gui/oreui/interface/ScreenPhase.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct ScopedFPSDataTracker; }
namespace OreUI { struct ScreenPerformanceSnapshot; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/DataTracker.h"
#include "mc/client/gui/oreui/interface/ScreenPhase.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ScreenPerformanceTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 328, ::std::optional<::OreUI::DataTracker>>      mDataTracker;
    ::ll::TypedStorage<1, 1, bool>                                         mUneventfulNavigation;
    ::ll::TypedStorage<1, 1, bool>                                         mEventfulNavigation;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>      mStartFrameTime;
    ::ll::TypedStorage<1, 1, ::OreUI::ScreenPhase>                         mLastPhase;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>> mLastFrameTime;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>> mLastAdvanceDuration;
    ::ll::TypedStorage<1, 1, bool>                                         mMeaningfulPaintEventReceived;
    ::ll::TypedStorage<1, 1, bool>                                         mMeaningfulPaintWithRenderingSetThisFrame;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::OreUI::DataTracker> completeProfilingScope();

    MCAPI void startProfilingScope(
        ::std::string const&                    telemetryIdPreviousScreen,
        ::std::string const&                    telemetryIdNewScreen,
        ::std::chrono::steady_clock::time_point currentTime
    );

    MCAPI void
    tick(::std::chrono::nanoseconds previousGameUpdateDuration, ::std::vector<::std::string> const& syncedFacets);
    // NOLINTEND
};
#else // @header-generator platform
class ScreenPerformanceTelemetry {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
