#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/SerializedSkinRef.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class ReadOnlyBinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PlayerListEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>      mId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>         mUUID;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>         mName;
    ::ll::TypedStorage<8, 24, std::string>         mXUID;
    ::ll::TypedStorage<8, 24, std::string>         mPlatformOnlineId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>       mName;
    ::ll::TypedStorage<8, 32, ::std::string>       mXUID;
    ::ll::TypedStorage<8, 32, ::std::string>       mPlatformOnlineId;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerListEntry();
#else // @header-generator platform
    MCAPI PlayerListEntry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PlayerListEntry(::Player const&);
#else // @header-generator platform
    MCAPI PlayerListEntry(::PlayerListEntry const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerListEntry(::PlayerListEntry const&);
#else // @header-generator platform
    MCAPI explicit PlayerListEntry(::Player const& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerListEntry clone() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::PlayerListEntry cloneExceptSkin() const;

    MCAPI ::PlayerListEntry& operator=(::PlayerListEntry&&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerListEntry cloneExceptSkin() const;

    MCNAPI ~PlayerListEntry();
#else // @header-generator platform
    MCAPI ~PlayerListEntry();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Player const&);
#else // @header-generator platform
    MCAPI void* $ctor(::PlayerListEntry const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::PlayerListEntry const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Player const& player);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
