#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
struct RealmsWorldInfo;
namespace OreUI { class RouteMatcher; }
namespace Realms { class RealmsList; }
namespace Realms { struct World; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace OreUI { class RouteMatcher; }
namespace Realms { class RealmsList; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::EntryPoints {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsSlotSettings : public ::OreUI::IEntryPoint {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsSlotSettings : public ::OreUI::IEntryPoint {
#else // @header-generator platform
class RealmsSlotSettings {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // RealmsSlotSettings inner types declare
    // clang-format off
    struct PathComponents;
    // clang-format on

    // RealmsSlotSettings inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PathComponents {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>             realmId;
        ::ll::TypedStorage<8, 24, std::string> tab;
        // NOLINTEND

    public:
        // prevent constructor by default
        PathComponents& operator=(PathComponents const&);
        PathComponents(PathComponents const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                     mGetRealmsList;
    ::ll::TypedStorage<8, 16, ::ui::ScreenTechStackSelector const&> mScreenTechStackSelector;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSlotSettings& operator=(RealmsSlotSettings const&);
    RealmsSlotSettings(RealmsSlotSettings const&);
    RealmsSlotSettings();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RealmsSlotSettings();

    virtual bool shouldAddToConfiguration() const;

    virtual void addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    RealmsSlotSettings(std::function<std::shared_ptr<Realms::RealmsList>()>, ::ui::ScreenTechStackSelector const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string composePackActivationRoute(::Realms::RealmId, std::string const&);

    MCNAPI static std::string composeRoute(::Realms::RealmId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[31]> BASE_SCREEN_ID();

    MCNAPI static ::OreUI::EntryPoints::RouteFlags const& FLAGS();

    MCNAPI static ::std::add_lvalue_reference_t<char const[25]> LEGACY_ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[18]> ROUTE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<std::shared_ptr<Realms::RealmsList>()>, ::ui::ScreenTechStackSelector const&);
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PathComponents {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Realms::RealmId> realmId;
        ::ll::TypedStorage<8, 32, ::std::string>    tab;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::Realms::RealmsList>()>> mGetRealmsList;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector const&>                        mScreenTechStackSelector;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSlotSettings& operator=(RealmsSlotSettings const&);
    RealmsSlotSettings(RealmsSlotSettings const&);
    RealmsSlotSettings();

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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string
    composePackActivationRoute(::Realms::RealmId realmId, ::std::string const& initialPackId);

    MCAPI static ::std::string composeRoute(::Realms::RealmId realmId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[31]> BASE_SCREEN_ID();

    MCAPI static ::std::add_lvalue_reference_t<char const[25]> LEGACY_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $shouldAddToConfiguration() const;

    MCAPI void $addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct PathComponents {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI::EntryPoints
