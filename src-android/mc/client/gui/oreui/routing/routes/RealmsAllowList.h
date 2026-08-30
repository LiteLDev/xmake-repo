#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace OreUI { class RouteMatcher; }
namespace Realms { class RealmsWorldContext; }
// clang-format on

namespace OreUI::EntryPoints {

class RealmsAllowList : public ::OreUI::IEntryPoint {
public:
    // RealmsAllowList inner types declare
    // clang-format off
    struct PathComponents;
    // clang-format on

    // RealmsAllowList inner types define
    struct PathComponents {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>     realmId;
        ::ll::TypedStorage<1, 1, bool> returnToChooseRealmScreen;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetRealmsWorldContext;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsAllowList();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RealmsAllowList();

    virtual bool shouldAddToConfiguration() const;

    virtual void addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsAllowList(std::function<std::shared_ptr<Realms::RealmsWorldContext>()>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[41]> BASE_SCREEN_ID();

    MCNAPI static ::OreUI::EntryPoints::RouteFlags const& FLAGS();

    MCNAPI static ::std::add_lvalue_reference_t<char const[18]> ROUTE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<std::shared_ptr<Realms::RealmsWorldContext>()>);
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
