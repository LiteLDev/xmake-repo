#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/Result.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/SerializedSkinRef.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Player;
class ReadOnlyBinaryStream;
// clang-format on

class PlayerListEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>      mId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>         mUUID;
    ::ll::TypedStorage<8, 24, std::string>         mName;
    ::ll::TypedStorage<8, 24, std::string>         mXUID;
    ::ll::TypedStorage<8, 24, std::string>         mPlatformOnlineId;
    ::ll::TypedStorage<4, 4, ::BuildPlatform>      mBuildPlatform;
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef> mSkin;
    ::ll::TypedStorage<4, 16, ::mce::Color>        mColor;
    ::ll::TypedStorage<1, 1, bool>                 mIsTeacher;
    ::ll::TypedStorage<1, 1, bool>                 mIsHost;
    ::ll::TypedStorage<1, 1, bool>                 mIsSubClient;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerListEntry& operator=(PlayerListEntry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerListEntry();

    MCNAPI explicit PlayerListEntry(::Player const&);

    MCNAPI PlayerListEntry(::PlayerListEntry const&);

    MCNAPI ::PlayerListEntry clone() const;

    MCNAPI ::PlayerListEntry cloneExceptSkin() const;

    MCNAPI ~PlayerListEntry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Player const&);

    MCNAPI void* $ctor(::PlayerListEntry const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
