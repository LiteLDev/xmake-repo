#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/npc/INpcDialogueData.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
namespace npc { struct ActionContainer; }
// clang-format on

struct NpcComponentDialogueData : public ::INpcDialogueData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mOwner;
    ::ll::TypedStorage<1, 1, bool>             mIsRemoteFire;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcComponentDialogueData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcComponentDialogueData();

    virtual std::string const& getDialogueText() const;

    virtual std::string const& getRawDialogueText() const;

    virtual std::string const& getNameText() const;

    virtual std::string const& getNameRawText() const;

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
    MCNAPI NpcComponentDialogueData(::WeakEntityRef, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakEntityRef, bool);
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

    MCNAPI std::string const& $getRawDialogueText() const;

    MCNAPI std::string const& $getNameText() const;

    MCNAPI std::string const& $getNameRawText() const;

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
