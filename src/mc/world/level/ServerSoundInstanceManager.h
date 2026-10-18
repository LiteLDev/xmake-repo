#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/SoundDataEvent__Fade.h"
#include "mc/SoundDataEvent__Pause.h"
#include "mc/SoundDataEvent__Resume.h"
#include "mc/SoundDataEvent__SeekTo.h"
#include "mc/SoundDataEvent__SetPitch.h"
#include "mc/SoundDataEvent__SetVolume.h"
#include "mc/SoundDataEvent__Stop.h"
#include "mc/deps/audio/ServerSoundHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ServerSoundHandle;
#endif // @header-generator platform
class SoundPlayerInterface;
struct ClientboundUpdateSoundDataPacketPayload;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace ServerSoundRuntime { struct DurationInfo; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ServerSoundInstanceManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ServerSoundInstanceManager inner types declare
    // clang-format off
    struct PendingAction;
    struct TrackedInstance;
    // clang-format on

    // ServerSoundInstanceManager inner types define
    struct PendingAction {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, ::ServerSoundHandle> mHandle;
        ::ll::TypedStorage<4, 12, std::variant<SoundDataEvent::Stop, SoundDataEvent::SetVolume, SoundDataEvent::SetPitch, SoundDataEvent::Fade, SoundDataEvent::SeekTo, SoundDataEvent::Pause, SoundDataEvent::Resume>> mEvent;
        ::ll::TypedStorage<8, 192, std::optional<NetworkIdentifierWithSubId>> mRecipient;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>   mUnk8e00a5;
        ::ll::UntypedStorage<4, 12>  mUnk60bdad;
        ::ll::UntypedStorage<8, 192> mUnk9ca62d;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        PendingAction& operator=(PendingAction const&);
        PendingAction(PendingAction const&);
        PendingAction();
#endif // @header-generator platform
    };

    struct TrackedInstance {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 16, std::variant<int, std::chrono::duration<long long, std::ratio<1, 1000>>>> mRemaining;
        ::ll::TypedStorage<8, 16, std::variant<int, std::chrono::duration<long long, std::ratio<1, 1000>>>> mTotal;
        ::ll::TypedStorage<1, 1, bool> mPendingCompletion;
        ::ll::TypedStorage<1, 1, bool> mPaused;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdated;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnke66367;
        ::ll::UntypedStorage<8, 16> mUnk893cdc;
        ::ll::UntypedStorage<1, 1>  mUnka55ecb;
        ::ll::UntypedStorage<1, 1>  mUnkaf0af3;
        ::ll::UntypedStorage<8, 8>  mUnk26f4f1;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using TrackedInstanceMap = std::map<ServerSoundHandle, ServerSoundInstanceManager::TrackedInstance>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        TrackedInstance& operator=(TrackedInstance const&);
        TrackedInstance(TrackedInstance const&);
        TrackedInstance();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ServerSoundHandle> mNextHandle;
    ::ll::TypedStorage<8, 24, std::vector<ServerSoundInstanceManager::PendingAction>> mPendingActions;
    ::ll::TypedStorage<8, 24, std::map<ServerSoundHandle, ServerSoundInstanceManager::TrackedInstance>> mTrackedInstances;
    ::ll::UntypedStorage<8, 88> mOnTrackedSoundCompleted;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnkb93fd6;
    ::ll::UntypedStorage<8, 24>  mUnk326bec;
    ::ll::UntypedStorage<8, 16>  mUnka661b6;
    ::ll::UntypedStorage<8, 128> mUnk3886a2;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerSoundInstanceManager();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ServerSoundInstanceManager& operator=(ServerSoundInstanceManager const&);
    ServerSoundInstanceManager(ServerSoundInstanceManager const&);
    ServerSoundInstanceManager();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addTrackedInstance(
        ::ServerSoundHandle,
        ::ServerSoundRuntime::DurationInfo const&,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void handleUpdateSoundData(
        ::ClientboundUpdateSoundDataPacketPayload const& payload,
        ::SoundPlayerInterface&                          soundPlayer
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ServerSoundHandle createHandle();

    MCNAPI std::vector<ServerSoundInstanceManager::PendingAction> drainPendingActions();

    MCNAPI ::Bedrock::PubSub::Connector<void(ServerSoundHandle)>& getOnTrackedSoundCompletedConnector();

    MCNAPI void handleUpdateSoundData(::ClientboundUpdateSoundDataPacketPayload const&, ::SoundPlayerInterface&);

    MCNAPI void queuePendingAction(
        ::ServerSoundHandle,
        std::variant<
            SoundDataEvent::Stop,
            SoundDataEvent::SetVolume,
            SoundDataEvent::SetPitch,
            SoundDataEvent::Fade,
            SoundDataEvent::SeekTo,
            SoundDataEvent::Pause,
            SoundDataEvent::Resume>,
        std::optional<NetworkIdentifierWithSubId> const&
    );

    MCNAPI bool seekTrackedInstance(
        ::ServerSoundHandle,
        float,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void tickSounds(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI void tickSounds(::std::chrono::steady_clock::time_point now);
#endif // @header-generator platform
    // NOLINTEND
};
