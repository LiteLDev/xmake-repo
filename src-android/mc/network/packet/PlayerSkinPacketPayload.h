#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/SerializedSkinRef.h"

struct PlayerSkinPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>         mUUID;
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef> mSkin;
    ::ll::TypedStorage<8, 24, std::string>         mLocalizedNewSkinName;
    ::ll::TypedStorage<8, 24, std::string>         mLocalizedOldSkinName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    PlayerSkinPacketPayload(::mce::UUID const&, ::SerializedSkinRef const&, std::string const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::UUID const&, ::SerializedSkinRef const&, std::string const&, std::string const&);
    // NOLINTEND
};
