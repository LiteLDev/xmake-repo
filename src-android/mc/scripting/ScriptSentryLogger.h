#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/IPrinter.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleDiagnostics { class ScriptSentrySession; }
namespace Scripting { struct BaseError; }
namespace Scripting { struct ContextId; }
// clang-format on

class ScriptSentryLogger : public ::Scripting::IPrinter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleDiagnostics::ScriptSentrySession>> mSentrySession;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentryLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptSentryLogger();

    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    virtual void onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptSentryLogger(std::shared_ptr<ScriptModuleDiagnostics::ScriptSentrySession>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ScriptModuleDiagnostics::ScriptSentrySession>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    MCNAPI void
    $onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
