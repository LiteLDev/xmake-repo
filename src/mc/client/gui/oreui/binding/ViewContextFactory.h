#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ClientDependencies.h"
#include "mc/client/gui/oreui/binding/GameDependencies.h"
#include "mc/client/gui/oreui/binding/methods/InvocationStateTracker.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class Binder; }
namespace OreUI::Detail { class CommandRegistry; }
namespace OreUI::Detail { class QueryRegistry; }
namespace OreUI::Detail { class ViewContext; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ClientDependencies.h"
#include "mc/client/gui/oreui/binding/GameDependencies.h"
#include "mc/client/gui/oreui/binding/methods/InvocationStateTracker.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class Binder; }
namespace OreUI::Detail { class CommandRegistry; }
namespace OreUI::Detail { class QueryRegistry; }
namespace OreUI::Detail { class ViewContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
class ViewContextFactory {
public:
    // ViewContextFactory inner types define
    using ContextPtr = std::unique_ptr<OreUI::Detail::ViewContext>;

    using QueryStorage =
        std::vector<std::function<void(OreUI::Detail::QueryRegistry&, OreUI::Detail::ViewContextFactory&)>>;

    using QueryRegistrator = std::function<void(OreUI::Detail::QueryRegistry&, OreUI::Detail::ViewContextFactory&)>;

    using CommandStorage =
        std::vector<std::function<void(OreUI::Detail::CommandRegistry&, OreUI::Detail::ViewContextFactory&)>>;

    using CommandRegistrator = std::function<void(OreUI::Detail::CommandRegistry&, OreUI::Detail::ViewContextFactory&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::OreUI::Detail::InvocationStateTracker> mStateTracker;
    ::ll::TypedStorage<8, 24, ::OreUI::ClientDependencies>             mClientDependencies;
    ::ll::TypedStorage<8, 176, ::OreUI::GameDependencies>              mGameDependencies;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewContextFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ViewContextFactory(::OreUI::GameDependencies, ::OreUI::ClientDependencies);

    MCNAPI std::unique_ptr<OreUI::Detail::ViewContext> makeContext(::OreUI::Detail::Binder&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<std::function<void(OreUI::Detail::CommandRegistry&, OreUI::Detail::ViewContextFactory&)>>&
    _commandStorage();

    MCNAPI static std::vector<std::function<void(OreUI::Detail::QueryRegistry&, OreUI::Detail::ViewContextFactory&)>>&
    _queryStorage();

    MCNAPI static bool
    _registerCommand(std::function<void(OreUI::Detail::CommandRegistry&, OreUI::Detail::ViewContextFactory&)> const&);

    MCNAPI static bool
    _registerQuery(std::function<void(OreUI::Detail::QueryRegistry&, OreUI::Detail::ViewContextFactory&)> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies, ::OreUI::ClientDependencies);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ViewContextFactory {
public:
    // ViewContextFactory inner types define
    using QueryRegistrator =
        ::std::function<void(::OreUI::Detail::QueryRegistry&, ::OreUI::Detail::ViewContextFactory&)>;

    using QueryStorage =
        ::std::vector<::std::function<void(::OreUI::Detail::QueryRegistry&, ::OreUI::Detail::ViewContextFactory&)>>;

    using CommandRegistrator =
        ::std::function<void(::OreUI::Detail::CommandRegistry&, ::OreUI::Detail::ViewContextFactory&)>;

    using CommandStorage =
        ::std::vector<::std::function<void(::OreUI::Detail::CommandRegistry&, ::OreUI::Detail::ViewContextFactory&)>>;

    using ContextPtr = ::std::unique_ptr<::OreUI::Detail::ViewContext>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::OreUI::Detail::InvocationStateTracker> mStateTracker;
    ::ll::TypedStorage<8, 24, ::OreUI::ClientDependencies>             mClientDependencies;
    ::ll::TypedStorage<8, 176, ::OreUI::GameDependencies>              mGameDependencies;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewContextFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ViewContextFactory(::OreUI::GameDependencies gameDependencies, ::OreUI::ClientDependencies clientDependencies);

    MCAPI ::std::unique_ptr<::OreUI::Detail::ViewContext> makeContext(::OreUI::Detail::Binder& binder);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<
        ::std::function<void(::OreUI::Detail::CommandRegistry&, ::OreUI::Detail::ViewContextFactory&)>>&
    _commandStorage();

    MCAPI static ::std::vector<
        ::std::function<void(::OreUI::Detail::QueryRegistry&, ::OreUI::Detail::ViewContextFactory&)>>&
    _queryStorage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies gameDependencies, ::OreUI::ClientDependencies clientDependencies);
    // NOLINTEND
};
#else // @header-generator platform
class ViewContextFactory {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::Detail
