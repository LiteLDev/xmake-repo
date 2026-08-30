#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"

struct EmotePacketPayload {
public:
    // EmotePacketPayload inner types define
    enum class Flags : uchar {
        SERVER_SIDE     = 1,
        MUTE_EMOTE_CHAT = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId;
    ::ll::TypedStorage<8, 24, std::string>     mPieceId;
    ::ll::TypedStorage<4, 4, uint>             mEmoteTicks;
    ::ll::TypedStorage<8, 24, std::string>     mXuid;
    ::ll::TypedStorage<8, 24, std::string>     mPlatformId;
    ::ll::TypedStorage<1, 1, uchar>            mFlags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EmotePacketPayload(::EmotePacketPayload const&);

    MCNAPI EmotePacketPayload(::ActorRuntimeID, std::string const&, uint, std::string const&, std::string const&);

    MCNAPI bool isEmoteChatMuted() const;

    MCNAPI bool isServerSide() const;

    MCNAPI void setEmoteChatMute();

    MCNAPI void setServerSide();

    MCNAPI ~EmotePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EmotePacketPayload const&);

    MCNAPI void* $ctor(::ActorRuntimeID, std::string const&, uint, std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
