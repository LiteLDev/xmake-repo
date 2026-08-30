#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/clock/TimeMarker.h"
#include "mc/world/level/dimension/DimensionType.h"
#include "mc/world/level/timelines/AttributeLayerTrack.h"
#include "mc/world/level/timelines/TimelinePhase.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class WorldClock;
// clang-format on

class Timeline {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    Timeline();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Timeline() = default;

    virtual void tick(::PacketSender&);

    virtual void _initialize();

    virtual void _phaseChangedWithoutTransition(std::string const&, std::string const&);

    virtual void _phaseTransitionStarted(std::string const&, std::string const&, int, int);

    virtual void _phaseTransitionEnded(std::string const&, std::string const&);
    // NOLINTEND
};
