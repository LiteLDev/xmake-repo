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
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>        npcActor;
    ::ll::TypedStorage<1, 1, bool>                    isRemoteFire;
    ::ll::TypedStorage<8, 24, std::string>            overrideDialogue;
    ::ll::TypedStorage<8, 24, std::string>            sceneName;
    ::ll::TypedStorage<8, 24, std::string>            npcName;
    ::ll::TypedStorage<8, 48, ::npc::ActionContainer> overrideActions;
    // NOLINTEND

public:
    // prevent constructor by default
    NPCDialogueData& operator=(NPCDialogueData const&);
    NPCDialogueData(NPCDialogueData const&);
    NPCDialogueData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NPCDialogueData(::WeakEntityRef);

    MCNAPI void parsePacket(::NpcDialoguePacket const&, ::NpcComponent*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakEntityRef);
    // NOLINTEND
};
