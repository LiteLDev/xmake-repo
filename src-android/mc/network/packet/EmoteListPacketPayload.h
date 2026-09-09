#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/platform/UUID.h"

struct EmoteListPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>        mRuntimeId;
    ::ll::TypedStorage<8, 24, std::vector<mce::UUID>> mEmotePieceIds;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_EMOTE_PIECE_IDS();
    // NOLINTEND
};
