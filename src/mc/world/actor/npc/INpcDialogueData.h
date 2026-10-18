#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
namespace npc { struct ActionContainer; }
// clang-format on

struct INpcDialogueData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INpcDialogueData() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getDialogueText() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getDialogueText() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getRawDialogueText() const;
#else // @header-generator platform
    virtual ::std::string const& getRawDialogueText() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getNameText() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getNameText() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getNameRawText() const;
#else // @header-generator platform
    virtual ::std::string const& getNameRawText() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getSceneName() const = 0;

    virtual ::npc::ActionContainer const* getActionsContainer() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getSceneName() const = 0;
#endif // @header-generator platform

    virtual ::npc::ActionContainer* getActionsContainer() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    virtual ::npc::ActionContainer const* getActionsContainer() const = 0;

#endif // @header-generator platform
    virtual ::ActorUniqueID getActorUniqueID() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor const* getActor() const = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::Actor* getActor() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ::Actor const* getActor() const = 0;
#endif // @header-generator platform

    virtual bool isRemoteFire();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getRawDialogueText() const;
#else // @header-generator platform
    MCFOLD ::std::string const& $getRawDialogueText() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getNameRawText() const;
#else // @header-generator platform
    MCFOLD bool $isRemoteFire();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isRemoteFire();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD ::std::string const& $getNameRawText() const;
#endif


#endif // @header-generator platform
    // NOLINTEND
};
