#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptAfterEventSignal {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptAfterEventSignal() = default;

    virtual void preFlush() = 0;

    virtual bool flush() = 0;

    virtual void postFlush() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getSubscriberCount() const;
#else // @header-generator platform
    virtual uint64 getSubscriberCount() const;
#endif // @header-generator platform

    virtual void enqueueClosureRemovalForActor(::ActorUniqueID const&);

    virtual bool isActorSignal() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getSubscriberCount() const;
#else // @header-generator platform
    MCFOLD uint64 $getSubscriberCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $enqueueClosureRemovalForActor(::ActorUniqueID const&);
#else // @header-generator platform
    MCFOLD void $enqueueClosureRemovalForActor(::ActorUniqueID const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isActorSignal() const;
#else // @header-generator platform
    MCFOLD bool $isActorSignal() const;


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
