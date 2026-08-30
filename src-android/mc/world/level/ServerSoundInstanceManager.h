#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/SoundDataEvent__Fade.h"
#include "mc/SoundDataEvent__Pause.h"
#include "mc/SoundDataEvent__Resume.h"
#include "mc/SoundDataEvent__SeekTo.h"
#include "mc/SoundDataEvent__SetPitch.h"
#include "mc/SoundDataEvent__SetVolume.h"
#include "mc/SoundDataEvent__Stop.h"
#include "mc/deps/audio/ServerSoundHandle.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/network/NetworkIdentifierWithSubId.h"

// auto generated forward declare list
// clang-format off
class SoundPlayerInterface;
struct ClientboundUpdateSoundDataPacketPayload;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace ServerSoundRuntime { struct DurationInfo; }
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
        // clang-format off
        ::ll::TypedStorage<8, 8, ::ServerSoundHandle> mHandle;
        ::ll::TypedStorage<4, 12, std::variant<SoundDataEvent::Stop, SoundDataEvent::SetVolume, SoundDataEvent::SetPitch, SoundDataEvent::Fade, SoundDataEvent::SeekTo, SoundDataEvent::Pause, SoundDataEvent::Resume>> mEvent;
        ::ll::TypedStorage<8, 192, std::optional<NetworkIdentifierWithSubId>> mRecipient;
        // clang-format on
        // NOLINTEND
    };

    struct TrackedInstance {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 16, std::variant<int, std::chrono::duration<long long, std::ratio<1, 1000>>>> mRemaining;
        ::ll::TypedStorage<8, 16, std::variant<int, std::chrono::duration<long long, std::ratio<1, 1000>>>> mTotal;
        ::ll::TypedStorage<1, 1, bool> mPendingCompletion;
        ::ll::TypedStorage<1, 1, bool> mPaused;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdated;
        // clang-format on
        // NOLINTEND
    };

    using TrackedInstanceMap = std::map<ServerSoundHandle, ServerSoundInstanceManager::TrackedInstance>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ServerSoundHandle> mNextHandle;
    ::ll::TypedStorage<8, 24, std::vector<ServerSoundInstanceManager::PendingAction>> mPendingActions;
    ::ll::TypedStorage<8, 24, std::map<ServerSoundHandle, ServerSoundInstanceManager::TrackedInstance>> mTrackedInstances;
    ::ll::UntypedStorage<8, 88> mOnTrackedSoundCompleted;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerSoundInstanceManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addTrackedInstance(
        ::ServerSoundHandle,
        ::ServerSoundRuntime::DurationInfo const&,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

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
    // NOLINTEND
};
