#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/client/gui/oreui/routing/RouteHistoryAction.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IContentManager;
class ISceneStack;
class PackManifestFactory;
class SceneFactory;
namespace OreUI { class RouteMatcher; }
// clang-format on

namespace OreUI::EntryPoints {

class ManifestValidation : public ::OreUI::IEntryPoint {
public:
    // ManifestValidation inner types define
    enum class ScreenType : uchar {
        Default = 0,
        Storage = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&> mManifestFactory;
    ::ll::UntypedStorage<8, 32>                      mKeyProvider;
    ::ll::UntypedStorage<8, 48>                      mGetContentManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ManifestValidation& operator=(ManifestValidation const&);
    ManifestValidation(ManifestValidation const&);
    ManifestValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ManifestValidation();

    virtual bool shouldAddToConfiguration() const;

    virtual void addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ManifestValidation(
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        std::function<IContentManager&()>
    );

    MCNAPI void _navigateToManifestValidationScreen(
        ::SceneFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&,
        std::string const&,
        ::OreUI::RouteHistoryAction const,
        ::OreUI::EntryPoints::ManifestValidation::ScreenType
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[20]> BASE_SCREEN_ID();

    MCNAPI static ::OreUI::EntryPoints::RouteFlags const& FLAGS();

    MCNAPI static ::std::add_lvalue_reference_t<char const[21]> ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[29]> ROUTE_STORAGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        std::function<IContentManager&()>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $shouldAddToConfiguration() const;

    MCNAPI void $addToMatcher(
        ::OreUI::RouteMatcher&,
        ::SceneFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::EntryPoints
