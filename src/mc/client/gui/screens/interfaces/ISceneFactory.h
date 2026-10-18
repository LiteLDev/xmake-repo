#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/TabbedUpsellScreenDefaultTab.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
struct StoreDataDrivenScreenParams;
// clang-format on

class ISceneFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ISceneFactory() = default;

    virtual std::shared_ptr<AbstractScene> createTabbedUpsellScreen(::TabbedUpsellScreenDefaultTab) = 0;

    virtual std::shared_ptr<AbstractScene> createStartMenuScreen(bool) = 0;

    virtual std::shared_ptr<AbstractScene> createStoreDataDrivenScreen(::StoreDataDrivenScreenParams const&, bool const, std::function<void ()>) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/TabbedUpsellScreenDefaultTab.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
struct StoreDataDrivenScreenParams;
// clang-format on

class ISceneFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISceneFactory() = default;

    virtual ::std::shared_ptr<::AbstractScene> createTabbedUpsellScreen(::TabbedUpsellScreenDefaultTab tab) = 0;

    virtual ::std::shared_ptr<::AbstractScene> createStartMenuScreen(bool shouldSendEvent) = 0;

    virtual ::std::shared_ptr<::AbstractScene> createStoreDataDrivenScreen(
        ::StoreDataDrivenScreenParams const& params,
        bool const                           forceDisableProgressScreen,
        ::std::function<void()>              initializedCallback
    ) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ISceneFactory {};
#endif // @header-generator platform
#endif // @header-generator platform
