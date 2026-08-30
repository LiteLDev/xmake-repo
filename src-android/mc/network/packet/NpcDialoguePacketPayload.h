#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class NpcDialoguePacket;
class NpcDialogueStorage;
// clang-format on

struct NpcDialoguePacketPayload {
public:
    // NpcDialoguePacketPayload inner types define
    enum class NpcDialogueActionType : int {
        Open  = 0,
        Close = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                   mNpcId;
    ::ll::TypedStorage<4, 4, ::NpcDialoguePacketPayload::NpcDialogueActionType> mNpcDialogueActionType;
    ::ll::TypedStorage<8, 24, std::string>                                      mDialogue;
    ::ll::TypedStorage<8, 24, std::string>                                      mSceneName;
    ::ll::TypedStorage<8, 24, std::string>                                      mNpcName;
    ::ll::TypedStorage<8, 24, std::string>                                      mActionJSON;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NpcDialoguePacketPayload(::ActorUniqueID);

    MCNAPI NpcDialoguePacketPayload(::NpcDialoguePacketPayload const&);

    MCNAPI NpcDialoguePacketPayload(
        ::ActorUniqueID,
        ::NpcDialoguePacketPayload::NpcDialogueActionType,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI ~NpcDialoguePacketPayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool initializePacket(::NpcDialoguePacket&, ::NpcDialogueStorage const*, std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& MAX_NUM_ACTIONS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorUniqueID);

    MCNAPI void* $ctor(::NpcDialoguePacketPayload const&);

    MCNAPI void* $ctor(
        ::ActorUniqueID,
        ::NpcDialoguePacketPayload::NpcDialogueActionType,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
