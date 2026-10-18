#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/clock/TimeMarker.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/timelines/AttributeLayerTrack.h"
#include "mc/world/level/timelines/TimelinePhase.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class PacketSender;
#if defined(LL_PLAT_A) // @header-generator platform
class WorldClock;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class Timeline {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                               mPeriod;
    ::ll::TypedStorage<8, 24, std::string>                      mName;
    ::ll::UntypedStorage<8, 24>                                 mWorldClock;
    ::ll::TypedStorage<4, 4, ::DimensionType>                   mDimension;
    ::ll::TypedStorage<8, 24, std::vector<AttributeLayerTrack>> mAttrLayerTracks;
    ::ll::TypedStorage<8, 24, std::vector<TimelinePhase>>       mPhases;
    ::ll::TypedStorage<8, 24, std::vector<TimeMarker>>          mTimeMarkers;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>             mCurrentPhaseIdx;
    ::ll::TypedStorage<8, 24, std::string>                      mTransitionCollectionName;
    ::ll::TypedStorage<4, 4, int>                               mTransitionProgressTicks;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnkd68029;
    ::ll::UntypedStorage<8, 32> mUnk3ce626;
    ::ll::UntypedStorage<8, 24> mUnk53c1cb;
    ::ll::UntypedStorage<4, 4>  mUnk55c571;
    ::ll::UntypedStorage<8, 24> mUnka5ceb3;
    ::ll::UntypedStorage<8, 24> mUnkacfbf6;
    ::ll::UntypedStorage<8, 24> mUnk9b6f6f;
    ::ll::UntypedStorage<8, 16> mUnk930d31;
    ::ll::UntypedStorage<8, 32> mUnk1fd04e;
    ::ll::UntypedStorage<4, 4>  mUnkf66ca5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Timeline& operator=(Timeline const&);
    Timeline(Timeline const&);
#endif // @header-generator platform
    Timeline();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Timeline() = default;

    virtual void tick(::PacketSender&);

    virtual void _initialize();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _phaseChangedWithoutTransition(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void _phaseChangedWithoutTransition(::std::string const&, ::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _phaseTransitionStarted(std::string const&, std::string const&, int, int);
#else // @header-generator platform
    virtual void _phaseTransitionStarted(::std::string const&, ::std::string const&, int, int);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _phaseTransitionEnded(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void _phaseTransitionEnded(::std::string const&, ::std::string const&);
#endif // @header-generator platform
    // NOLINTEND
};
