#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/audio/ServerSoundHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/NetworkIdentifierWithSubId.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ServerSoundHandle;
#endif // @header-generator platform
class ServerSoundInstanceManager;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct NetworkIdentifierWithSubId;
#endif // @header-generator platform
namespace ServerSoundRuntime { struct Definition; }
// clang-format on

class ServerSoundInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ServerSoundHandle>                         mHandle;
    ::ll::TypedStorage<8, 24, std::string>                                mSoundEventId;
    ::ll::TypedStorage<8, 192, std::optional<NetworkIdentifierWithSubId>> mRecipient;
    ::ll::UntypedStorage<8, 24>                                           mManager;
    ::ll::TypedStorage<4, 4, int>                                         mLoopCount;
    ::ll::UntypedStorage<8, 24>                                           mDefinition;
    ::ll::TypedStorage<1, 1, bool>                                        mIsStopped;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk9cc9d1;
    ::ll::UntypedStorage<8, 32>  mUnk1ca53f;
    ::ll::UntypedStorage<8, 192> mUnk596b51;
    ::ll::UntypedStorage<8, 24>  mUnk337e6c;
    ::ll::UntypedStorage<4, 4>   mUnkabe83e;
    ::ll::UntypedStorage<8, 24>  mUnk133689;
    ::ll::UntypedStorage<1, 1>   mUnk2dc8a9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ServerSoundInstance& operator=(ServerSoundInstance const&);
    ServerSoundInstance(ServerSoundInstance const&);
#endif // @header-generator platform
    ServerSoundInstance();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ServerSoundInstance(::ServerSoundInstance&&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ServerSoundInstance(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ServerSoundHandle,
        ::ServerSoundInstanceManager&,
        std::string,
        ::Bedrock::NonOwnerPointer<const ServerSoundRuntime::Definition>,
        int,
        std::optional<NetworkIdentifierWithSubId>
#else // @header-generator platform
        ::ServerSoundHandle                                                handle,
        ::ServerSoundInstanceManager&                                      manager,
        ::std::string                                                      soundEventId,
        ::Bedrock::NonOwnerPointer<::ServerSoundRuntime::Definition const> definition,
        int                                                                loopCount,
        ::std::optional<::NetworkIdentifierWithSubId>                      recipient
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fade(float, float);

    MCNAPI float getDuration() const;

    MCNAPI std::string getId() const;

    MCNAPI float getPlaybackPosition(
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    ) const;

    MCNAPI std::string const& getSoundEventId() const;

    MCNAPI bool hasDurationInfo() const;

    MCNAPI bool isActive() const;
#else // @header-generator platform
    MCNAPI float getPlaybackPosition(::std::chrono::steady_clock::time_point now) const;
#endif // @header-generator platform

    MCNAPI void pause();

    MCNAPI void resume();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void seekTo(float);

    MCNAPI void setPitch(float);

    MCNAPI void setVolume(float);
#else // @header-generator platform
    MCNAPI void seekTo(float seconds);
#endif // @header-generator platform

    MCNAPI void stop();

    MCNAPI ~ServerSoundInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ServerSoundInstance&&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ServerSoundHandle,
        ::ServerSoundInstanceManager&,
        std::string,
        ::Bedrock::NonOwnerPointer<const ServerSoundRuntime::Definition>,
        int,
        std::optional<NetworkIdentifierWithSubId>
#else // @header-generator platform
        ::ServerSoundHandle                                                handle,
        ::ServerSoundInstanceManager&                                      manager,
        ::std::string                                                      soundEventId,
        ::Bedrock::NonOwnerPointer<::ServerSoundRuntime::Definition const> definition,
        int                                                                loopCount,
        ::std::optional<::NetworkIdentifierWithSubId>                      recipient
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
