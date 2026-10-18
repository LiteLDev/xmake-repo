#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class NpcRequestPacket;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct NpcRequestPacketPayload {
public:
    // NpcRequestPacketPayload inner types define
    enum class RequestType : uchar {
        SetActions             = 0,
        ExecuteAction          = 1,
        ExecuteClosingCommands = 2,
        SetName                = 3,
        SetSkin                = 4,
        SetInteractText        = 5,
        ExecuteOpeningCommands = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                       mId;
    ::ll::TypedStorage<1, 1, ::NpcRequestPacketPayload::RequestType> mType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                           mActions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                         mActions;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>                                  mActionIndex;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                           mSceneName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                         mSceneName;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    NpcRequestPacketPayload();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NpcRequestPacketPayload(::NpcRequestPacketPayload const&);

    MCNAPI NpcRequestPacketPayload(::ActorRuntimeID, std::string const&);

    MCNAPI NpcRequestPacketPayload(::ActorRuntimeID, int, std::string const&);

    MCNAPI NpcRequestPacketPayload(::ActorRuntimeID, ::NpcRequestPacketPayload::RequestType, std::string const&);

    MCNAPI std::string const& getInteractText() const;

    MCNAPI std::string const& getNpcName() const;

    MCNAPI std::string const& getSceneName() const;

    MCNAPI int getSkin() const;

    MCNAPI ~NpcRequestPacketPayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NpcRequestPacket requestSetInteractText(::ActorRuntimeID, std::string);

    MCNAPI static ::NpcRequestPacket requestSetName(::ActorRuntimeID, std::string);

    MCNAPI static ::NpcRequestPacket requestSetSkin(::ActorRuntimeID, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI NpcRequestPacketPayload(::ActorRuntimeID id, ::std::string const& newActions);

    MCAPI NpcRequestPacketPayload(::ActorRuntimeID id, int actionIndex, ::std::string const& sceneName);

    MCAPI NpcRequestPacketPayload(
        ::ActorRuntimeID                       id,
        ::NpcRequestPacketPayload::RequestType type,
        ::std::string const&                   sceneName
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::NpcRequestPacketPayload const&);

    MCNAPI void* $ctor(::ActorRuntimeID, std::string const&);

    MCNAPI void* $ctor(::ActorRuntimeID, int, std::string const&);

    MCNAPI void* $ctor(::ActorRuntimeID, ::NpcRequestPacketPayload::RequestType, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ActorRuntimeID id, ::std::string const& newActions);

    MCAPI void* $ctor(::ActorRuntimeID id, int actionIndex, ::std::string const& sceneName);

    MCAPI void* $ctor(::ActorRuntimeID id, ::NpcRequestPacketPayload::RequestType type, ::std::string const& sceneName);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
