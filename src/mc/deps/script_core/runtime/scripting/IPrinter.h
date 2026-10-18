#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct BaseError; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class IPrinter {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IPrinter() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onInfo(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    virtual void onInfo(::Scripting::ContextId contextId, ::std::string_view message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onWarn(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    virtual void onWarn(::Scripting::ContextId contextId, ::std::string_view message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onError(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    virtual void onError(::Scripting::ContextId contextId, ::std::string_view message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
#else // @header-generator platform
    virtual void onException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
#else // @header-generator platform
    virtual bool shouldPrintException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
    // clang-format on
#else // @header-generator platform
    virtual void onPromiseRejection(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny,
        bool                          isHandled
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onInfo(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    MCNAPI void $onInfo(::Scripting::ContextId contextId, ::std::string_view message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onWarn(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    MCNAPI void $onWarn(::Scripting::ContextId contextId, ::std::string_view message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onError(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    MCNAPI void $onError(::Scripting::ContextId contextId, ::std::string_view message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    $shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
#else // @header-generator platform
    MCNAPI bool $shouldPrintException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
