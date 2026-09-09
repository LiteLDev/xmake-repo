#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/clock/TimeMarker.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
struct TimeMarkerData;
struct WorldClockData;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class WorldClock {
public:
    // WorldClock inner types define
    enum class DirtyFlags : uchar {
        SyncState        = 0,
        AddTimeMarker    = 1,
        RemoveTimeMarker = 2,
        Count            = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>     mName;
    ::ll::TypedStorage<4, 4, int>                 mTime;
    ::ll::TypedStorage<1, 1, bool>                mIsPaused;
    ::ll::UntypedStorage<8, 48>                   mTimeMarkers;
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mTimeMarkersToAdd;
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mTimeMarkersToRemove;
    ::ll::UntypedStorage<1, 1>                    mDirtyFlags;
    ::ll::UntypedStorage<8, 88>                   mOnPause;
    ::ll::UntypedStorage<8, 88>                   mOnResume;
    ::ll::UntypedStorage<8, 88>                   mOnRestart;
    ::ll::UntypedStorage<8, 88>                   mOnTimeMarker;
    ::ll::UntypedStorage<8, 88>                   mOnTimeModified;
    ::ll::TypedStorage<1, 1, bool>                mTimeMarkerEventsRanThisTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldClock();

    MCNAPI explicit WorldClock(::WorldClockData const&);

    MCNAPI WorldClock(::WorldClock const&);

    MCNAPI void _sendAddTimeMarker(::PacketSender&) const;

    MCNAPI void _sendRemoveTimeMarker(::PacketSender&) const;

    MCNAPI void _sendSyncWorldClockState(::PacketSender&) const;

    MCNAPI void forEachTimeMarker(::brstd::function_ref<void(const TimeMarker&)>) const;

    MCNAPI ulong getId() const;

    MCNAPI bool getIsPaused() const;

    MCNAPI int getTime() const;

    MCNAPI void loadState(int, bool);

    MCNAPI ::WorldClock& operator=(::WorldClock const&);

    MCNAPI void setTime(int);

    MCNAPI void sync(::PacketSender&);

    MCNAPI void tick();

    MCNAPI ~WorldClock();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& MAX_NAME_LENGTH();

    MCNAPI static uint const& MAX_TIMEMARKERS_CAPACITY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::WorldClockData const&);

    MCNAPI void* $ctor(::WorldClock const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
