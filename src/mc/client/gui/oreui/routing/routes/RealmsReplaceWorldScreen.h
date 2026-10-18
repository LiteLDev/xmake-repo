#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
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

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::EntryPoints {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsReplaceWorldScreen : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::Realms::RealmsWorldContext>()>> mRealmsWorldContext;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::Realms::RealmsWorldEditor>()>>  mRealmsWorldEditor;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackContext>()>>
        mGetRealmsWorldPackContext;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsReplaceWorldScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool shouldAddToConfiguration() const /*override*/;

    virtual void addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsReplaceWorldScreen(
        ::std::function<::std::shared_ptr<::Realms::RealmsWorldContext>()>                   realmsWorldContext,
        ::std::function<::std::shared_ptr<::Realms::RealmsWorldEditor>()>                    realmsWorldEditor,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackContext>()>&& getRealmsWorldPackContext
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[21]> BASE_SCREEN_ID();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::std::shared_ptr<::Realms::RealmsWorldContext>()>                   realmsWorldContext,
        ::std::function<::std::shared_ptr<::Realms::RealmsWorldEditor>()>                    realmsWorldEditor,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsWorldPackContext>()>&& getRealmsWorldPackContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $shouldAddToConfiguration() const;

    MCAPI void $addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const;
    // NOLINTEND
};
#else // @header-generator platform
class RealmsReplaceWorldScreen {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::EntryPoints
