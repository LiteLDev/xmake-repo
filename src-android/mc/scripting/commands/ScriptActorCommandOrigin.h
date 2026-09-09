#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/scripting/commands/ScriptCommandOrigin.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
// clang-format on

class ScriptActorCommandOrigin : public ::ScriptCommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mActor;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptActorCommandOrigin();

    virtual ::Actor* getEntity() const;

    virtual std::unique_ptr<CommandOrigin> clone() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorCommandOrigin(
        ::Actor const&,
        std::function<void(int, std::string&&)>,
        std::optional<CommandPermissionLevel>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor const&, std::function<void(int, std::string&&)>, std::optional<CommandPermissionLevel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Actor* $getEntity() const;

    MCNAPI std::unique_ptr<CommandOrigin> $clone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
