#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/ServerSoundHandle.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/NetworkIdentifierWithSubId.h"

// auto generated forward declare list
// clang-format off
class ServerSoundInstanceManager;
namespace ServerSoundRuntime { struct Definition; }
// clang-format on

class ServerSoundInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerSoundHandle>                         mHandle;
    ::ll::TypedStorage<8, 24, std::string>                                mSoundEventId;
    ::ll::TypedStorage<8, 192, std::optional<NetworkIdentifierWithSubId>> mRecipient;
    ::ll::UntypedStorage<8, 24>                                           mManager;
    ::ll::TypedStorage<4, 4, int>                                         mLoopCount;
    ::ll::UntypedStorage<8, 24>                                           mDefinition;
    ::ll::TypedStorage<1, 1, bool>                                        mIsStopped;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSoundInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerSoundInstance(::ServerSoundInstance&&);

    MCNAPI ServerSoundInstance(
        ::ServerSoundHandle,
        ::ServerSoundInstanceManager&,
        std::string,
        ::Bedrock::NonOwnerPointer<const ServerSoundRuntime::Definition>,
        int,
        std::optional<NetworkIdentifierWithSubId>
    );

    MCNAPI void fade(float, float);

    MCNAPI float getDuration() const;

    MCNAPI std::string getId() const;

    MCNAPI float getPlaybackPosition(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    ) const;

    MCNAPI std::string const& getSoundEventId() const;

    MCNAPI bool hasDurationInfo() const;

    MCNAPI bool isActive() const;

    MCNAPI void pause();

    MCNAPI void resume();

    MCNAPI void seekTo(float);

    MCNAPI void setPitch(float);

    MCNAPI void setVolume(float);

    MCNAPI void stop();

    MCNAPI ~ServerSoundInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerSoundInstance&&);

    MCNAPI void* $ctor(
        ::ServerSoundHandle,
        ::ServerSoundInstanceManager&,
        std::string,
        ::Bedrock::NonOwnerPointer<const ServerSoundRuntime::Definition>,
        int,
        std::optional<NetworkIdentifierWithSubId>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
