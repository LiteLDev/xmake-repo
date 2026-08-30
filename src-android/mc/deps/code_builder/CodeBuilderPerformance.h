#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WebviewObserver;
// clang-format on

class CodeBuilderPerformance {
public:
    // CodeBuilderPerformance inner types define
    enum class Stage : int {
        CacheCodescreenStart  = 0,
        CacheCodescreenFinish = 1,
        WebviewLoadStart      = 2,
        WebviewLoadFinish     = 3,
        CreateNewProject      = 4,
        ProjectLoadStart      = 5,
        ProjectLoadFinish     = 6,
        TutorialLoadStart     = 7,
        TutorialLoadFinish    = 8,
        EditorContentLoaded   = 9,
        LoadBlockly           = 10,
        BlocksContentLoaded   = 11,
        NetworkRequest        = 12,
        DomLoaded             = 13,
        CodeRunStart          = 14,
        CodeRunComplete       = 15,
        FirstCommandSent      = 16,
        FirstCommandReceived  = 17,
        FirstCommandRun       = 18,
    };

    enum Flags : uint {
        AwaitingFirstCommandSent     = 0,
        AwaitingFirstCommandReceived = 1,
        AwaitingFirstCommandRun      = 2,
        CodeScreenCached             = 3,
        CodeRunStarted               = 4,
        FirstWorldLaunch             = 5,
        FirstSessionLaunch           = 6,
        TutorialCached               = 7,
        Count                        = 8,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void clearFirstSessionLaunch();

    MCNAPI static void clearFirstWorldLaunch();

    MCNAPI static void clearTutorialCached();

    MCNAPI static void fireCodeBuilderLoadPerformanceEvent(
        ::WebviewObserver const*,
        ::CodeBuilderPerformance::Stage,
        std::string_view,
        ulong,
        ulong,
        std::chrono::duration<long long, std::ratio<1, 1000>>
    );

    MCNAPI static void fireCodeBuilderRunPerformanceEvent(
        ::WebviewObserver const&,
        ::CodeBuilderPerformance::Stage,
        std::string_view,
        std::chrono::duration<long long, std::ratio<1, 1000>>
    );

    MCNAPI static uchar getCacheState();

    MCNAPI static std::string const getCodeBuilderSessionId();

    MCNAPI static std::string const getCodeProjectId();

    MCNAPI static std::string const getEditorName();

    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000>>
    getElapsedTime(::CodeBuilderPerformance::Stage const);

    MCNAPI static bool isAwaitingFirstCommandReceived();

    MCNAPI static bool isFirstSessionLaunch();

    MCNAPI static bool isFirstWorldLaunch();

    MCNAPI static void resetFirstWorldLaunch();

    MCNAPI static void setCodeBuilderSessionId();

    MCNAPI static void setCodeScreenCached();

    MCNAPI static void setEditorName(std::string const&);

    MCNAPI static void setTimeStart(::CodeBuilderPerformance::Stage const);

    MCNAPI static void setTutorialCached();

    MCNAPI static std::string toString(::CodeBuilderPerformance::Stage const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::optional<std::chrono::time_point<
        std::chrono::steady_clock,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>>>&
    mCacheCodeScreenTimeStart();

    MCNAPI static std::string& mCodeBuilderProjectId();

    MCNAPI static std::string& mCodeBuilderSessionId();

    MCNAPI static int& mCodeProjectId();

    MCNAPI static std::optional<std::chrono::time_point<
        std::chrono::steady_clock,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>>>&
    mCodeRunStart();

    MCNAPI static std::optional<std::chrono::time_point<
        std::chrono::steady_clock,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>>>&
    mCreateNewProjectTimeStart();

    MCNAPI static std::string& mEditorName();

    MCNAPI static std::bitset<8>& mFlags();

    MCNAPI static std::optional<std::chrono::time_point<
        std::chrono::steady_clock,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>>>&
    mLastTimestamp();

    MCNAPI static std::optional<std::chrono::time_point<
        std::chrono::steady_clock,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>>>&
    mProjectLoadTimeStart();

    MCNAPI static std::optional<std::chrono::time_point<
        std::chrono::steady_clock,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>>>&
    mTutorialLoadTimeStart();

    MCNAPI static std::optional<std::chrono::time_point<
        std::chrono::steady_clock,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>>>&
    mWebviewLoadTimeStart();
    // NOLINTEND
};
