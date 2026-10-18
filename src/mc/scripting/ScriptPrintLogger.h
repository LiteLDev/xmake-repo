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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptPrintLogger();
#else // @header-generator platform
    virtual ~ScriptPrintLogger() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onInfo(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    virtual void onInfo(::Scripting::ContextId, ::std::string_view message) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onWarn(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    virtual void onWarn(::Scripting::ContextId, ::std::string_view message) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onError(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    virtual void onError(::Scripting::ContextId, ::std::string_view message) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
#else // @header-generator platform
    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const& error, ::entt::meta_any const&) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
#else // @header-generator platform
    virtual bool
    shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const& errorAny) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
    // clang-format on
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
    MCNAPI void $onInfo(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    MCAPI void $onInfo(::Scripting::ContextId, ::std::string_view message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onWarn(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    MCAPI void $onWarn(::Scripting::ContextId, ::std::string_view message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onError(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    MCAPI void $onError(::Scripting::ContextId, ::std::string_view message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
#else // @header-generator platform
    MCAPI void $onException(::Scripting::ContextId, ::Scripting::BaseError const& error, ::entt::meta_any const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    $shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
#else // @header-generator platform
    MCAPI bool $shouldPrintException(
        ::Scripting::ContextId,
        ::Scripting::BaseError const&,
        ::entt::meta_any const& errorAny
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $onPromiseRejection(
        ::Scripting::ContextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&,
        bool isHandled
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
