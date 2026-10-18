#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/WeakEntityRef.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/npc/INpcDialogueData.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
namespace npc { struct ActionContainer; }
// clang-format on

struct NpcSceneDialogueData : public ::INpcDialogueData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mOwner;
    ::ll::TypedStorage<8, 24, std::string>     mSceneName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mOwner;
    ::ll::TypedStorage<8, 32, ::std::string>   mSceneName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    NpcSceneDialogueData();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NpcSceneDialogueData();
#else // @header-generator platform
    virtual ::std::string const& getDialogueText() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getDialogueText() const;
#else // @header-generator platform
    virtual ::std::string const& getSceneName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getNameText() const;
#else // @header-generator platform
    virtual ::std::string const& getNameText() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getNameRawText() const;
#else // @header-generator platform
    virtual ::std::string const& getNameRawText() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getSceneName() const;
#else // @header-generator platform
    virtual ::npc::ActionContainer* getActionsContainer() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::npc::ActionContainer const* getActionsContainer() const;
#else // @header-generator platform
    virtual ::npc::ActionContainer const* getActionsContainer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::npc::ActionContainer* getActionsContainer();
#else // @header-generator platform
    virtual ::ActorUniqueID getActorUniqueID() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorUniqueID getActorUniqueID();
#else // @header-generator platform
    virtual ::Actor* getActor() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor const* getActor() const;

    virtual ::Actor* getActor();
#else // @header-generator platform
    virtual ::Actor const* getActor() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NpcSceneDialogueData(::WeakEntityRef, std::string const&);
#else // @header-generator platform
    MCAPI NpcSceneDialogueData(::WeakEntityRef npc, ::std::string const& sceneName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::WeakEntityRef, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::WeakEntityRef npc, ::std::string const& sceneName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getDialogueText() const;
#else // @header-generator platform
    MCAPI ::std::string const& $getDialogueText() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getNameText() const;
#else // @header-generator platform
    MCFOLD ::std::string const& $getSceneName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getNameRawText() const;
#else // @header-generator platform
    MCAPI ::std::string const& $getNameText() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getSceneName() const;
#else // @header-generator platform
    MCAPI ::std::string const& $getNameRawText() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::npc::ActionContainer const* $getActionsContainer() const;
#else // @header-generator platform
    MCFOLD ::npc::ActionContainer* $getActionsContainer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::npc::ActionContainer* $getActionsContainer();
#else // @header-generator platform
    MCFOLD ::npc::ActionContainer const* $getActionsContainer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $getActorUniqueID();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::ActorUniqueID $getActorUniqueID();
#else // LL_PLAT_C
    MCFOLD ::ActorUniqueID $getActorUniqueID();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor const* $getActor() const;
#else // @header-generator platform
    MCFOLD ::Actor* $getActor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* $getActor();
#else // @header-generator platform
    MCFOLD ::Actor const* $getActor() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
