#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"

struct EmotePacketPayload {
public:
    // EmotePacketPayload inner types define
    enum class Flags : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
        SERVER_SIDE     = 1,
        MUTE_EMOTE_CHAT = 2,
#else // @header-generator platform
        ServerSide    = 1,
        MuteEmoteChat = 2,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>     mPieceId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>   mPieceId;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>             mEmoteTicks;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>     mXuid;
    ::ll::TypedStorage<8, 24, std::string>     mPlatformId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>   mXuid;
    ::ll::TypedStorage<8, 32, ::std::string>   mPlatformId;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>            mFlags;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    EmotePacketPayload& operator=(EmotePacketPayload const&);
    EmotePacketPayload();

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EmotePacketPayload(::EmotePacketPayload const&);
#else // @header-generator platform
    MCAPI EmotePacketPayload(::EmotePacketPayload const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EmotePacketPayload(::ActorRuntimeID, std::string const&, uint, std::string const&, std::string const&);

    MCNAPI bool isEmoteChatMuted() const;

    MCNAPI bool isServerSide() const;

    MCNAPI void setEmoteChatMute();

    MCNAPI void setServerSide();

    MCNAPI ~EmotePacketPayload();
#else // @header-generator platform
    MCAPI ~EmotePacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::EmotePacketPayload const&);

    MCNAPI void* $ctor(::ActorRuntimeID, std::string const&, uint, std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI void* $ctor(::EmotePacketPayload const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
