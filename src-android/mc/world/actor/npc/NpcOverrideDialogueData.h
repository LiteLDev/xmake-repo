#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/INpcDialogueData.h"
#include "mc/world/actor/npc/NPCDialogueData.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
namespace npc { struct ActionContainer; }
// clang-format on

struct NpcOverrideDialogueData : public ::INpcDialogueData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::NPCDialogueData> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcOverrideDialogueData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcOverrideDialogueData();

    virtual std::string const& getDialogueText() const;

    virtual std::string const& getNameText() const;

    virtual std::string const& getSceneName() const;

    virtual ::npc::ActionContainer const* getActionsContainer() const;

    virtual ::npc::ActionContainer* getActionsContainer();

    virtual ::ActorUniqueID getActorUniqueID();

    virtual ::Actor const* getActor() const;

    virtual ::Actor* getActor();

    virtual bool isRemoteFire();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NpcOverrideDialogueData(::NPCDialogueData&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NPCDialogueData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getDialogueText() const;

    MCNAPI std::string const& $getNameText() const;

    MCNAPI std::string const& $getSceneName() const;

    MCNAPI ::npc::ActionContainer const* $getActionsContainer() const;

    MCNAPI ::npc::ActionContainer* $getActionsContainer();

    MCNAPI ::ActorUniqueID $getActorUniqueID();

    MCNAPI ::Actor const* $getActor() const;

    MCNAPI ::Actor* $getActor();

    MCNAPI bool $isRemoteFire();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
