#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/IPrinter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct BaseError; }
namespace Scripting { struct ContextId; }
// clang-format on

class ScriptPrintLogger : public ::Scripting::IPrinter {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptPrintLogger();

    virtual void onInfo(::Scripting::ContextId, std::string_view) const;

    virtual void onWarn(::Scripting::ContextId, std::string_view) const;

    virtual void onError(::Scripting::ContextId, std::string_view) const;

    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    virtual bool shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    virtual void onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onInfo(::Scripting::ContextId, std::string_view) const;

    MCNAPI void $onWarn(::Scripting::ContextId, std::string_view) const;

    MCNAPI void $onError(::Scripting::ContextId, std::string_view) const;

    MCNAPI void $onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    MCNAPI bool
    $shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    MCNAPI void
    $onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
