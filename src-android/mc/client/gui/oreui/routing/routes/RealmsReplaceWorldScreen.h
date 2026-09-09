#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace OreUI { class RouteMatcher; }
namespace Realms { class RealmsWorldContext; }
namespace Realms { class RealmsWorldEditor; }
namespace Realms { class RealmsWorldPackContext; }
// clang-format on

namespace OreUI::EntryPoints {

class RealmsReplaceWorldScreen : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mRealmsWorldContext;
    ::ll::UntypedStorage<8, 48> mRealmsWorldEditor;
    ::ll::UntypedStorage<8, 48> mGetRealmsWorldPackContext;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsReplaceWorldScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RealmsReplaceWorldScreen();

    virtual bool shouldAddToConfiguration() const;

    virtual void addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsReplaceWorldScreen(
        std::function<std::shared_ptr<Realms::RealmsWorldContext>()>,
        std::function<std::shared_ptr<Realms::RealmsWorldEditor>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsWorldPackContext>>()>&&
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[21]> BASE_SCREEN_ID();

    MCNAPI static ::OreUI::EntryPoints::RouteFlags const& FLAGS();

    MCNAPI static ::std::add_lvalue_reference_t<char const[8]> REALM_ID();

    MCNAPI static ::std::add_lvalue_reference_t<char const[22]> ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[7]> SLOT_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<std::shared_ptr<Realms::RealmsWorldContext>()>,
        std::function<std::shared_ptr<Realms::RealmsWorldEditor>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsWorldPackContext>>()>&&
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
