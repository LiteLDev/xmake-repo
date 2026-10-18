#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/WeakEntityRef.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mActor;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk3b91a7;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptActorCommandOrigin& operator=(ScriptActorCommandOrigin const&);
    ScriptActorCommandOrigin(ScriptActorCommandOrigin const&);
#endif // @header-generator platform
    ScriptActorCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptActorCommandOrigin();
#else // @header-generator platform
    virtual ~ScriptActorCommandOrigin() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* getEntity() const;
#else // @header-generator platform
    virtual ::Actor* getEntity() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CommandOrigin> clone() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorCommandOrigin(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Actor const&,
        std::function<void(int, std::string&&)>,
        std::optional<CommandPermissionLevel>
#else // @header-generator platform
        ::Actor const&                              actor,
        ::std::function<void(int, ::std::string&&)> outputCallback,
        ::std::optional<::CommandPermissionLevel>   permissionLevel
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor const&, std::function<void(int, std::string&&)>, std::optional<CommandPermissionLevel>);
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::Actor const&                              actor,
        ::std::function<void(int, ::std::string&&)> outputCallback,
        ::std::optional<::CommandPermissionLevel>   permissionLevel
    );
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CommandOrigin> $clone() const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::CommandOrigin> $clone() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
