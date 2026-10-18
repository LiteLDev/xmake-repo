#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/flat_map.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/clock/TimeMarker.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class PacketSender;
#if defined(LL_PLAT_A) // @header-generator platform
struct TimeMarkerData;
#else // @header-generator platform
class TimeMarker;
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    using OnPauseSignature = void(::std::string const&);

    using OnRestartSignature = void(::std::string const&, int&);

    using OnResumeSignature = void(::std::string const&);

    using OnTimeMarkerSignature = void(::std::string const&, ::Bedrock::NonOwnerPointer<::TimeMarker const> const);

    using OnTimeModifiedSignature = void(::std::string const&, int);

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    ::ll::TypedStorage<4, 4, int>             mTime;
    ::ll::TypedStorage<1, 1, bool>            mIsPaused;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            uint64,
            ::Bedrock::UniqueOwnerPointer<::TimeMarker>,
            ::std::less<uint64>,
            ::std::vector<uint64>,
            ::std::vector<::Bedrock::UniqueOwnerPointer<::TimeMarker>>>>
                                                                              mTimeMarkers;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                          mTimeMarkersToAdd;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                          mTimeMarkersToRemove;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::WorldClock::DirtyFlags, 3>> mDirtyFlags;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::std::string const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnPause;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::std::string const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnResume;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::std::string const&, int&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnRestart;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::std::string const&, ::Bedrock::NonOwnerPointer<::TimeMarker const>),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnTimeMarker;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::std::string const&, int), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                   mOnTimeModified;
    ::ll::TypedStorage<1, 1, bool> mTimeMarkerEventsRanThisTick;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WorldClock();
#else // @header-generator platform
    MCAPI WorldClock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit WorldClock(::WorldClockData const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit WorldClock(::WorldClockData const& data);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WorldClock(::WorldClock const&);
#else // @header-generator platform
    MCAPI WorldClock(::WorldClock const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendAddTimeMarker(::PacketSender&) const;
#else // @header-generator platform
    MCAPI void _sendAddTimeMarker(::PacketSender& packetSender) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendRemoveTimeMarker(::PacketSender&) const;
#else // @header-generator platform
    MCAPI void _sendRemoveTimeMarker(::PacketSender& packetSender) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _sendSyncWorldClockState(::PacketSender&) const;
#else // @header-generator platform
    MCAPI void _sendSyncWorldClockState(::PacketSender& packetSender) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachTimeMarker(::brstd::function_ref<void(const TimeMarker&)>) const;
#else // @header-generator platform
    MCAPI ::WorldClock& operator=(::WorldClock const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getId() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void tick();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getIsPaused() const;

    MCNAPI int getTime() const;

    MCNAPI void loadState(int, bool);

    MCNAPI ::WorldClock& operator=(::WorldClock const&);

    MCNAPI void setTime(int);

    MCNAPI void sync(::PacketSender&);

    MCNAPI void tick();

    MCNAPI ~WorldClock();
#else // @header-generator platform
    MCAPI ~WorldClock();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& MAX_NAME_LENGTH();

    MCNAPI static uint const& MAX_TIMEMARKERS_CAPACITY();
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::WorldClockData const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::WorldClockData const& data);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::WorldClock const&);
#else // @header-generator platform
    MCAPI void* $ctor(::WorldClock const& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
