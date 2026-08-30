#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IOfferRepository;
class ISceneStack;
class RealmsAPI;
class SceneFactory;
class SunsettingManager;
namespace OreUI { class RouteMatcher; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI::EntryPoints {

class RealmsCreateScreen : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                         mUserManager;
    ::ll::UntypedStorage<8, 48>                         mGetOfferRepository;
    ::ll::UntypedStorage<8, 48>                         mGetSunsettingManager;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealms;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsCreateScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RealmsCreateScreen();

    virtual bool shouldAddToConfiguration() const;

    virtual void addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsCreateScreen(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<IOfferRepository>>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<SunsettingManager>>()>,
        std::weak_ptr<RealmsAPI>
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[21]> BASE_SCREEN_ID();

    MCNAPI static ::OreUI::EntryPoints::RouteFlags const& FLAGS();

    MCNAPI static ::std::add_lvalue_reference_t<char const[10]> OFFER_TIER();

    MCNAPI static ::std::add_lvalue_reference_t<char const[10]> REALM_NAME();

    MCNAPI static ::std::add_lvalue_reference_t<char const[22]> ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[15]> SUBSCRIPTION_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<IOfferRepository>>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<SunsettingManager>>()>,
        std::weak_ptr<RealmsAPI>
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
