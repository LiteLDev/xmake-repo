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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>         mLocalizedNewSkinName;
    ::ll::TypedStorage<8, 24, std::string>         mLocalizedOldSkinName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>       mLocalizedNewSkinName;
    ::ll::TypedStorage<8, 32, ::std::string>       mLocalizedOldSkinName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PlayerSkinPacketPayload& operator=(PlayerSkinPacketPayload const&);
    PlayerSkinPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    PlayerSkinPacketPayload(::mce::UUID const&, ::SerializedSkinRef const&, std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI PlayerSkinPacketPayload(::PlayerSkinPacketPayload const&);

    MCAPI PlayerSkinPacketPayload(
        ::mce::UUID const&         uuid,
        ::SerializedSkinRef const& skin,
        ::std::string const&       newSkinName,
        ::std::string const&       oldSkinName
    );

    MCAPI ~PlayerSkinPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::mce::UUID const&, ::SerializedSkinRef const&, std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI void* $ctor(::PlayerSkinPacketPayload const&);

    MCAPI void* $ctor(
        ::mce::UUID const&         uuid,
        ::SerializedSkinRef const& skin,
        ::std::string const&       newSkinName,
        ::std::string const&       oldSkinName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
