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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                      mDialogue;
    ::ll::TypedStorage<8, 24, std::string>                                      mSceneName;
    ::ll::TypedStorage<8, 24, std::string>                                      mNpcName;
    ::ll::TypedStorage<8, 24, std::string>                                      mActionJSON;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                    mDialogue;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mSceneName;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mNpcName;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mActionJSON;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    NpcDialoguePacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NpcDialoguePacketPayload(::ActorUniqueID);
#else // @header-generator platform
    MCAPI explicit NpcDialoguePacketPayload(::ActorUniqueID npcID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NpcDialoguePacketPayload(::NpcDialoguePacketPayload const&);

    MCNAPI NpcDialoguePacketPayload(
        ::ActorUniqueID,
        ::NpcDialoguePacketPayload::NpcDialogueActionType,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&
#else // @header-generator platform
    MCAPI NpcDialoguePacketPayload(
        ::ActorUniqueID                                   npcID,
        ::NpcDialoguePacketPayload::NpcDialogueActionType dialogueActionType,
        ::std::string const&                              dialogueText,
        ::std::string const&                              sceneName,
        ::std::string const&                              npcName,
        ::std::string const&                              actionJSON
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~NpcDialoguePacketPayload();
#else // @header-generator platform
    MCAPI ~NpcDialoguePacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool initializePacket(::NpcDialoguePacket&, ::NpcDialogueStorage const*, std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& MAX_NUM_ACTIONS();
#else // @header-generator platform
    MCAPI static bool initializePacket(
        ::NpcDialoguePacket&        outPacket,
        ::NpcDialogueStorage const* storage,
        ::std::string const&        sceneName
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorUniqueID);
#else // @header-generator platform
    MCAPI void* $ctor(::ActorUniqueID npcID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::NpcDialoguePacketPayload const&);

    MCNAPI void* $ctor(
        ::ActorUniqueID,
        ::NpcDialoguePacketPayload::NpcDialogueActionType,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorUniqueID                                   npcID,
        ::NpcDialoguePacketPayload::NpcDialogueActionType dialogueActionType,
        ::std::string const&                              dialogueText,
        ::std::string const&                              sceneName,
        ::std::string const&                              npcName,
        ::std::string const&                              actionJSON
#endif // @header-generator platform
    );
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
