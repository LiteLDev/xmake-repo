#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WebviewObserver;
// clang-format on

class CodeBuilderPerformance {
public:
    // CodeBuilderPerformance inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class Flags : int {
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

#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void clearFirstSessionLaunch();

    MCNAPI static void clearFirstWorldLaunch();

    MCNAPI static void clearTutorialCached();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI static void fireCodeBuilderLoadPerformanceEvent(
#if defined(LL_PLAT_A) // @header-generator platform
        ::WebviewObserver const*,
        ::CodeBuilderPerformance::Stage,
        std::string_view,
        ulong,
        ulong,
        std::chrono::duration<long long, std::ratio<1, 1000>>
#else // @header-generator platform
        ::WebviewObserver const*        eventing,
        ::CodeBuilderPerformance::Stage stage,
        ::std::string_view              codeProjectId,
        uint64                          tutorialSize,
        uint64                          downloadSize,
        ::std::chrono::milliseconds     duration
#endif // @header-generator platform
    );

    MCNAPI static void fireCodeBuilderRunPerformanceEvent(
#if defined(LL_PLAT_A) // @header-generator platform
        ::WebviewObserver const&,
        ::CodeBuilderPerformance::Stage,
        std::string_view,
        std::chrono::duration<long long, std::ratio<1, 1000>>
#else // @header-generator platform
        ::WebviewObserver const&        eventing,
        ::CodeBuilderPerformance::Stage stage,
        ::std::string_view              codeProjectId,
        ::std::chrono::milliseconds     duration
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static uchar getCacheState();
#else // @header-generator platform
    MCNAPI static ::std::string const getCodeBuilderSessionId();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const getCodeBuilderSessionId();
#else // @header-generator platform
    MCNAPI static ::std::string const getCodeProjectId();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const getCodeProjectId();
#else // @header-generator platform
    MCNAPI static ::std::string const getEditorName();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const getEditorName();
#else // @header-generator platform
    MCNAPI static ::std::chrono::milliseconds getElapsedTime(::CodeBuilderPerformance::Stage stage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000>>
    getElapsedTime(::CodeBuilderPerformance::Stage const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static void setCodeBuilderSessionId();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isAwaitingFirstCommandReceived();
#else // @header-generator platform
    MCNAPI static void setTimeStart(::CodeBuilderPerformance::Stage stage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isFirstSessionLaunch();

    MCNAPI static bool isFirstWorldLaunch();

    MCNAPI static void resetFirstWorldLaunch();

    MCNAPI static void setCodeBuilderSessionId();

    MCNAPI static void setCodeScreenCached();

    MCNAPI static void setEditorName(std::string const&);

    MCNAPI static void setTimeStart(::CodeBuilderPerformance::Stage const);

    MCNAPI static void setTutorialCached();

    MCNAPI static std::string toString(::CodeBuilderPerformance::Stage const);
#else // @header-generator platform
    MCNAPI static ::std::string toString(::CodeBuilderPerformance::Stage stage);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<std::chrono::time_point<
        std::chrono::steady_clock,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>>>&
    mCacheCodeScreenTimeStart();
#else // @header-generator platform
    MCNAPI static ::std::optional<::std::chrono::steady_clock::time_point>& mCacheCodeScreenTimeStart();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string& mCodeBuilderProjectId();
#else // @header-generator platform
    MCNAPI static ::std::string& mCodeBuilderProjectId();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string& mCodeBuilderSessionId();
#else // @header-generator platform
    MCNAPI static ::std::string& mCodeBuilderSessionId();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int& mCodeProjectId();
#else // @header-generator platform
    MCNAPI static ::std::optional<::std::chrono::steady_clock::time_point>& mCodeRunStart();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<std::chrono::time_point<
        std::chrono::steady_clock,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>>>&
    mCodeRunStart();
#else // @header-generator platform
    MCNAPI static ::std::string& mEditorName();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<std::chrono::time_point<
        std::chrono::steady_clock,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>>>&
    mCreateNewProjectTimeStart();
#else // @header-generator platform
    MCNAPI static ::std::bitset<8>& mFlags();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string& mEditorName();
#else // @header-generator platform
    MCNAPI static ::std::optional<::std::chrono::steady_clock::time_point>& mLastTimestamp();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::bitset<8>& mFlags();
#else // @header-generator platform
    MCNAPI static ::std::optional<::std::chrono::steady_clock::time_point>& mProjectLoadTimeStart();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<std::chrono::time_point<
        std::chrono::steady_clock,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>>>&
    mLastTimestamp();
#else // @header-generator platform
    MCNAPI static ::std::optional<::std::chrono::steady_clock::time_point>& mTutorialLoadTimeStart();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI static ::std::optional<::std::chrono::steady_clock::time_point>& mWebviewLoadTimeStart();
#endif // @header-generator platform
    // NOLINTEND
};
