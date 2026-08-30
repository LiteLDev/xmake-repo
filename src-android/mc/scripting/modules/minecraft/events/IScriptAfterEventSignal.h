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

    virtual ulong getSubscriberCount() const;

    virtual void enqueueClosureRemovalForActor(::ActorUniqueID const&);

    virtual bool isActorSignal() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ulong $getSubscriberCount() const;

    MCNAPI void $enqueueClosureRemovalForActor(::ActorUniqueID const&);

    MCNAPI bool $isActorSignal() const;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
