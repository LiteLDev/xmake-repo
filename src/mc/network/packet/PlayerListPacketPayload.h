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
#if defined(LL_PLAT_A) // @header-generator platform
    struct RemoveEntry;
#else // @header-generator platform
#endif // @header-generator platform
    struct AddEntry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct RemoveEntry;
#endif // @header-generator platform
    // clang-format on

    // PlayerListPacketPayload inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct RemoveEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PlayerListPacketType> mAction;
        ::ll::TypedStorage<8, 16, ::mce::UUID>           mUUID;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct AddEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PlayerListPacketType> mAction;
        ::ll::TypedStorage<8, 16, ::mce::UUID>           mUUID;
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>        mId;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>           mName;
        ::ll::TypedStorage<8, 24, std::string>           mXUID;
        ::ll::TypedStorage<8, 24, std::string>           mPlatformOnlineId;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>         mName;
        ::ll::TypedStorage<8, 32, ::std::string>         mXUID;
        ::ll::TypedStorage<8, 32, ::std::string>         mPlatformOnlineId;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, ::BuildPlatform>        mBuildPlatform;
        ::ll::TypedStorage<8, 16, ::SerializedSkinRef>   mSkin;
        ::ll::TypedStorage<1, 1, bool>                   mIsTeacher;
        ::ll::TypedStorage<1, 1, bool>                   mIsHost;
        ::ll::TypedStorage<1, 1, bool>                   mIsSubClient;
        ::ll::TypedStorage<4, 16, ::mce::Color>          mColor;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        // prevent constructor by default
        AddEntry();

    public:
#endif // @header-generator platform
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI AddEntry(::PlayerListPacketPayload::AddEntry const&);
#else // @header-generator platform
        MCAPI AddEntry(::PlayerListPacketPayload::AddEntry const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI explicit AddEntry(::PlayerListEntry);
#else // @header-generator platform
        MCAPI ::PlayerListPacketPayload::AddEntry& operator=(::PlayerListPacketPayload::AddEntry&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator==(::PlayerListPacketPayload::AddEntry const&) const;
#else // @header-generator platform
        MCAPI ::PlayerListPacketPayload::AddEntry& operator=(::PlayerListPacketPayload::AddEntry const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::PlayerListEntry toPlayerListEntry() const;
#else // @header-generator platform
        MCAPI bool operator==(::PlayerListPacketPayload::AddEntry const& other) const;

#ifdef LL_PLAT_C
        MCAPI ::PlayerListEntry toPlayerListEntry() const;
#endif

        MCAPI ~AddEntry();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::PlayerListPacketPayload::AddEntry const&);
#else // @header-generator platform
        MCAPI void* $ctor(::PlayerListPacketPayload::AddEntry const&);
        // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::PlayerListEntry);
#else // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    struct RemoveEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PlayerListPacketType> mAction;
        ::ll::TypedStorage<8, 16, ::mce::UUID>           mUUID;
        // NOLINTEND
    };

    using Entry = ::std::variant<::PlayerListPacketPayload::RemoveEntry, ::PlayerListPacketPayload::AddEntry>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::variant<PlayerListPacketPayload::RemoveEntry, PlayerListPacketPayload::AddEntry>>> mEntries;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<::PlayerListPacketPayload::RemoveEntry, ::PlayerListPacketPayload::AddEntry>>>
        mEntries;
#endif // @header-generator platform
    // NOLINTEND
};
