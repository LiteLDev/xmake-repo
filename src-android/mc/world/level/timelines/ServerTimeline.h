#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/timelines/AttributeLayerTrack.h"
#include "mc/world/level/timelines/Timeline.h"
#include "mc/world/level/timelines/TimelineErrorCode.h"

// auto generated forward declare list
// clang-format off
class ClientboundTextureShiftPacket;
class NetworkIdentifier;
class PacketSender;
class TimeMarker;
class WorldClockRegistryServer;
struct TimelinePhase;
namespace EAS { class AttributeLayer; }
// clang-format on

class ServerTimeline : public ::Timeline {
public:
    // ServerTimeline inner types declare
    // clang-format off
    class Builder;
    // clang-format on

    // ServerTimeline inner types define
    class Builder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 232>                                mTimeline;
        ::ll::UntypedStorage<8, 24>                                 mEasManager;
        ::ll::UntypedStorage<8, 24>                                 mWorldClockRegistry;
        ::ll::TypedStorage<8, 24, std::vector<AttributeLayerTrack>> mLayerTracks;
        ::ll::TypedStorage<4, 8, std::optional<TimelineErrorCode>>  mLayerTrackError;
        ::ll::TypedStorage<8, 24, std::string>                      mClockId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                  mEasManager;
    ::ll::TypedStorage<4, 8, std::optional<int>> mExpectedTick;
    ::ll::TypedStorage<1, 1, bool>               mNeedsTextureShiftResync;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerTimeline(ServerTimeline const&);
    ServerTimeline();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::PacketSender&);

    virtual void _initialize();

    virtual void _phaseChangedWithoutTransition(std::string const&, std::string const&);

    virtual void _phaseTransitionStarted(std::string const&, std::string const&, int, int);
    // NOLINTEND
};
