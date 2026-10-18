#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/UUID.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on
#endif // @header-generator platform

struct EmoteListPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>        mRuntimeId;
    ::ll::TypedStorage<8, 24, std::vector<mce::UUID>> mEmotePieceIds;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_EMOTE_PIECE_IDS();
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>            mRuntimeId;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::UUID>> mEmotePieceIds;
#endif // @header-generator platform
    // NOLINTEND
};
