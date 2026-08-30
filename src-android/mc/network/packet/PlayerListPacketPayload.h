#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/packet/PlayerListPacketType.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/SerializedSkinRef.h"

// auto generated forward declare list
// clang-format off
class PlayerListEntry;
// clang-format on

struct PlayerListPacketPayload {
public:
    // PlayerListPacketPayload inner types declare
    // clang-format off
    struct RemoveEntry;
    struct AddEntry;
    // clang-format on

    // PlayerListPacketPayload inner types define
    struct RemoveEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PlayerListPacketType> mAction;
        ::ll::TypedStorage<8, 16, ::mce::UUID>           mUUID;
        // NOLINTEND
    };

    struct AddEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PlayerListPacketType> mAction;
        ::ll::TypedStorage<8, 16, ::mce::UUID>           mUUID;
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>        mId;
        ::ll::TypedStorage<8, 24, std::string>           mName;
        ::ll::TypedStorage<8, 24, std::string>           mXUID;
        ::ll::TypedStorage<8, 24, std::string>           mPlatformOnlineId;
        ::ll::TypedStorage<4, 4, ::BuildPlatform>        mBuildPlatform;
        ::ll::TypedStorage<8, 16, ::SerializedSkinRef>   mSkin;
        ::ll::TypedStorage<1, 1, bool>                   mIsTeacher;
        ::ll::TypedStorage<1, 1, bool>                   mIsHost;
        ::ll::TypedStorage<1, 1, bool>                   mIsSubClient;
        ::ll::TypedStorage<4, 16, ::mce::Color>          mColor;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AddEntry(::PlayerListPacketPayload::AddEntry const&);

        MCNAPI explicit AddEntry(::PlayerListEntry);

        MCNAPI bool operator==(::PlayerListPacketPayload::AddEntry const&) const;

        MCNAPI ::PlayerListEntry toPlayerListEntry() const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::PlayerListPacketPayload::AddEntry const&);

        MCNAPI void* $ctor(::PlayerListEntry);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::variant<PlayerListPacketPayload::RemoveEntry, PlayerListPacketPayload::AddEntry>>> mEntries;
    // clang-format on
    // NOLINTEND
};
