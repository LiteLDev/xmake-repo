#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/timelines/AttributeLayerTrack.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/timelines/Timeline.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/timelines/TimelineErrorCode.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ClientboundTextureShiftPacket;
class NetworkIdentifier;
#else // @header-generator platform
#endif // @header-generator platform
class PacketSender;
#if defined(LL_PLAT_A) // @header-generator platform
class TimeMarker;
class WorldClockRegistryServer;
struct TimelinePhase;
namespace EAS { class AttributeLayer; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 232>                                mTimeline;
        ::ll::UntypedStorage<8, 24>                                 mEasManager;
        ::ll::UntypedStorage<8, 24>                                 mWorldClockRegistry;
        ::ll::TypedStorage<8, 24, std::vector<AttributeLayerTrack>> mLayerTracks;
        ::ll::TypedStorage<4, 8, std::optional<TimelineErrorCode>>  mLayerTrackError;
        ::ll::TypedStorage<8, 24, std::string>                      mClockId;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 248> mUnkcf6bc0;
        ::ll::UntypedStorage<8, 24>  mUnkcebff7;
        ::ll::UntypedStorage<8, 24>  mUnkc0aa57;
        ::ll::UntypedStorage<8, 24>  mUnk8b0f20;
        ::ll::UntypedStorage<4, 8>   mUnk7a031d;
        ::ll::UntypedStorage<8, 32>  mUnkecdecd;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Builder& operator=(Builder const&);
        Builder(Builder const&);
        Builder();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                  mEasManager;
    ::ll::TypedStorage<4, 8, std::optional<int>> mExpectedTick;
    ::ll::TypedStorage<1, 1, bool>               mNeedsTextureShiftResync;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk9b42b0;
    ::ll::UntypedStorage<4, 8>  mUnkc08a2b;
    ::ll::UntypedStorage<1, 1>  mUnk4d220e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ServerTimeline& operator=(ServerTimeline const&);
#endif // @header-generator platform
    ServerTimeline(ServerTimeline const&);
    ServerTimeline();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::PacketSender&);
#else // @header-generator platform
    virtual void tick(::PacketSender&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _initialize();
#else // @header-generator platform
    virtual void _initialize() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _phaseChangedWithoutTransition(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void _phaseChangedWithoutTransition(::std::string const&, ::std::string const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _phaseTransitionStarted(std::string const&, std::string const&, int, int);
#else // @header-generator platform
    virtual void _phaseTransitionStarted(::std::string const&, ::std::string const&, int, int) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
