#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
