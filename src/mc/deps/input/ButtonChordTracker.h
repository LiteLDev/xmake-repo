#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/ChordTrackingResult.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
struct ChordButtonMapping;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
class InputEventQueue;
struct ChordButtonMapping;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class ButtonChordTracker {
public:
    // ButtonChordTracker inner types declare
    // clang-format off
    struct ChordButtonDetails;
#if defined(LL_PLAT_A) // @header-generator platform
    struct TrackerMappingAndState;
#else // @header-generator platform
#endif // @header-generator platform
    struct ChordHoldInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct TrackerMappingAndState;
#endif // @header-generator platform
    // clang-format on

    // ButtonChordTracker inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ChordButtonDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>   buttonMaskForThisChord;
        ::ll::TypedStorage<4, 4, int>   completeChordMask;
        ::ll::TypedStorage<4, 4, uint>  resultantButtonId;
        ::ll::TypedStorage<4, 4, int>   currentStateIndex;
        ::ll::TypedStorage<4, 4, int>   originalChordButtonSequenceIndex;
        ::ll::TypedStorage<4, 4, float> minHoldTime;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ChordButtonDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>   buttonMaskForThisChord;
        ::ll::TypedStorage<4, 4, int>   completeChordMask;
        ::ll::TypedStorage<4, 4, uint>  resultantButtonId;
        ::ll::TypedStorage<4, 4, int>   currentStateIndex;
        ::ll::TypedStorage<4, 4, int>   originalChordButtonSequenceIndex;
        ::ll::TypedStorage<4, 4, float> minHoldTime;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ChordButtonDetails {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct TrackerMappingAndState {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 40, std::unordered_multimap<uint, ButtonChordTracker::ChordButtonDetails>> mChordMap;
        ::ll::TypedStorage<8, 24, std::vector<int>> mChordState;
        ::ll::TypedStorage<8, 24, std::vector<std::vector<uint>>> mButtonSequences;
        ::ll::TypedStorage<8, 24, std::map<uint, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mButtonLastInputTimes;
        // clang-format on
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ChordHoldInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                     controllerId;
        ::ll::TypedStorage<4, 4, float>                                   minHoldTime;
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> timePressed;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ChordHoldInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        TrackerMappingAndState& operator=(TrackerMappingAndState const&);
        TrackerMappingAndState(TrackerMappingAndState const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::ButtonChordTracker::TrackerMappingAndState& operator=(::ButtonChordTracker::TrackerMappingAndState&&);

        MCNAPI ~TrackerMappingAndState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ChordHoldInfo {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<4, 4, int> controllerId;
        ::ll::TypedStorage<4, 4, float> minHoldTime;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> timePressed;
        // clang-format on
        // NOLINTEND
    };

    using ChordMap = std::unordered_multimap<uint, ButtonChordTracker::ChordButtonDetails>;

    using ChordState = std::vector<int>;

    using ButtonSequences = std::vector<std::vector<uint>>;

    using ButtonLastInputTimes = std::map<
        uint,
        std::chrono::
            time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::InputEventQueue&>                                                   mQueue;
    ::ll::TypedStorage<8, 24, std::vector<ButtonChordTracker::ChordButtonDetails*>>                mChordsDown;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, ButtonChordTracker::TrackerMappingAndState>> mPerIdTrackerData;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, ButtonChordTracker::ChordHoldInfo>>         mMinHoldTimeTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonChordTracker(ButtonChordTracker const&);
    ButtonChordTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _raiseLongestChordSequences(::ButtonChordTracker::TrackerMappingAndState&, int);

    MCNAPI void clearMapping(int);

    MCNAPI void setMapping(std::vector<ChordButtonMapping> const&, int);
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct TrackerMappingAndState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_multimap<uint, ::ButtonChordTracker::ChordButtonDetails>> mChordMap;
        ::ll::TypedStorage<8, 24, ::std::vector<int>>                                        mChordState;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<uint>>>                        mButtonSequences;
        ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::chrono::steady_clock::time_point>> mButtonLastInputTimes;
        // NOLINTEND

    public:
        // prevent constructor by default
        TrackerMappingAndState& operator=(TrackerMappingAndState const&);
        TrackerMappingAndState(TrackerMappingAndState const&);
        TrackerMappingAndState();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::ButtonChordTracker::TrackerMappingAndState& operator=(::ButtonChordTracker::TrackerMappingAndState&&);

        MCAPI ~TrackerMappingAndState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    using ChordMap = ::std::unordered_multimap<uint, ::ButtonChordTracker::ChordButtonDetails>;

    using ChordState = ::std::vector<int>;

    using ButtonSequences = ::std::vector<::std::vector<uint>>;

    using ButtonLastInputTimes = ::std::map<uint, ::std::chrono::steady_clock::time_point>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::InputEventQueue&>                                        mQueue;
    ::ll::TypedStorage<8, 24, ::std::vector<::ButtonChordTracker::ChordButtonDetails*>> mChordsDown;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::ButtonChordTracker::TrackerMappingAndState>>
                                                                                               mPerIdTrackerData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::ButtonChordTracker::ChordHoldInfo>> mMinHoldTimeTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonChordTracker& operator=(ButtonChordTracker const&);
    ButtonChordTracker(ButtonChordTracker const&);
    ButtonChordTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _raiseLongestChordSequences(::ButtonChordTracker::TrackerMappingAndState& trackerData, int controllerId);

    MCAPI void clearMapping(int controllerId);

    MCAPI void setMapping(::std::vector<::ChordButtonMapping> const& inputMapping, int controllerId);
    // NOLINTEND
#else // @header-generator platform
    struct TrackerMappingAndState {};
#endif // @header-generator platform
#endif // @header-generator platform
};
