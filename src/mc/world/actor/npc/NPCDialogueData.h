#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/npc/ActionContainer.h"

// auto generated forward declare list
// clang-format off
class NpcComponent;
class NpcDialoguePacket;
// clang-format on

struct NPCDialogueData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>        npcActor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>        npcActor;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                    isRemoteFire;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>            overrideDialogue;
    ::ll::TypedStorage<8, 24, std::string>            sceneName;
    ::ll::TypedStorage<8, 24, std::string>            npcName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>          overrideDialogue;
    ::ll::TypedStorage<8, 32, ::std::string>          sceneName;
    ::ll::TypedStorage<8, 32, ::std::string>          npcName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 48, ::npc::ActionContainer> overrideActions;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    NPCDialogueData& operator=(NPCDialogueData const&);
    NPCDialogueData(NPCDialogueData const&);
    NPCDialogueData();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NPCDialogueData(::WeakEntityRef);

    MCNAPI void parsePacket(::NpcDialoguePacket const&, ::NpcComponent*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void parsePacket(::NpcDialoguePacket const& packet, ::NpcComponent* component);

    MCAPI ~NPCDialogueData();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::WeakEntityRef);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
