#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"

// auto generated forward declare list
// clang-format off
class NpcRequestPacket;
// clang-format on

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
    ::ll::TypedStorage<8, 24, std::string>                           mActions;
    ::ll::TypedStorage<1, 1, uchar>                                  mActionIndex;
    ::ll::TypedStorage<8, 24, std::string>                           mSceneName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NpcRequestPacketPayload const&);

    MCNAPI void* $ctor(::ActorRuntimeID, std::string const&);

    MCNAPI void* $ctor(::ActorRuntimeID, int, std::string const&);

    MCNAPI void* $ctor(::ActorRuntimeID, ::NpcRequestPacketPayload::RequestType, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
