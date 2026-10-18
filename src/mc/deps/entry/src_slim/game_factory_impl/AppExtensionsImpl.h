#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/app_extensions/IAppExtensions.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/entry/game_factory_impl/Extensions.h"

// auto generated forward declare list
// clang-format off
namespace AppExtensions { class IGameModuleExtensions; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace GameFactoryImpl {

#if defined(LL_PLAT_A) // @header-generator platform
class AppExtensionsImpl : public ::AppExtensions::IAppExtensions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::GameFactoryImpl::Extensions> mExtensions;
    // NOLINTEND

public:
    // prevent constructor by default
    AppExtensionsImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AppExtensionsImpl();

    virtual ::Bedrock::NonOwnerPointer<AppExtensions::ITestExtensions> tryGetTestExtensions() const;

    virtual ::Bedrock::NonOwnerPointer<AppExtensions::IGameModuleExtensions> tryGetGameModuleExtensions() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::NonOwnerPointer<AppExtensions::ITestExtensions> $tryGetTestExtensions() const;

    MCNAPI ::Bedrock::NonOwnerPointer<AppExtensions::IGameModuleExtensions> $tryGetGameModuleExtensions() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class AppExtensionsImpl {};
#endif // @header-generator platform

} // namespace GameFactoryImpl
