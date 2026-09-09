#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
namespace AppExtensions { class AppExtensionsOwner; }
namespace GameFactoryImpl { struct Extensions; }
// clang-format on

namespace GameFactoryImpl {

class IGameBuilder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameBuilder() = default;

    virtual void setInitStepToStartOn(std::optional<ulong>) = 0;

    virtual void initialize() = 0;

    virtual ::AppExtensions::AppExtensionsOwner& getExtensionsOwner() = 0;

    virtual ::GameFactoryImpl::Extensions createAppExtensions() = 0;

    virtual std::unique_ptr<IMinecraftGame> finalize() = 0;
    // NOLINTEND
};

} // namespace GameFactoryImpl
