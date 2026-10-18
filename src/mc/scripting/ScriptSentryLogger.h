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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleDiagnostics::ScriptSentrySession>> mSentrySession;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScriptModuleDiagnostics::ScriptSentrySession>> mSentrySession;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptSentryLogger();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptSentryLogger();
#else // @header-generator platform
    virtual ~ScriptSentryLogger() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
#else // @header-generator platform
    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const& error, ::entt::meta_any const&) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void onPromiseRejection(
        ::Scripting::ContextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&,
        bool isHandled
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
#else // @header-generator platform
    MCAPI void $onException(::Scripting::ContextId, ::Scripting::BaseError const& error, ::entt::meta_any const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
#else // @header-generator platform
    MCAPI void $onPromiseRejection(
        ::Scripting::ContextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&,
        bool isHandled
    ) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
