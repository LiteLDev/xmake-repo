#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/SceneFactory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class BaseScreen;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IMinecraftGame;
class IUIDefRepository;
namespace Json { class Value; }
namespace OreUI { class SceneProvider; }
namespace SceneCreationUtils { class ScreenCreator; }
// clang-format on

class VanillaSceneFactory : public ::SceneFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mDevConsoleScreenFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaSceneFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaSceneFactory();

    virtual std::shared_ptr<AbstractScene> createDevConsole();

    virtual ::Json::Value createGlobalVars(::gsl::not_null<Bedrock::NonOwnerPointer<const IUIDefRepository>>) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VanillaSceneFactory(
        ::IMinecraftGame&,
        ::IClientInstance&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&,
        ::OreUI::SceneProvider&,
        ::brstd::move_only_function<std::shared_ptr<BaseScreen>(SceneCreationUtils::ScreenCreator&)>&&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IMinecraftGame&,
        ::IClientInstance&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&,
        ::OreUI::SceneProvider&,
        ::brstd::move_only_function<std::shared_ptr<BaseScreen>(SceneCreationUtils::ScreenCreator&)>&&
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
    MCNAPI std::shared_ptr<AbstractScene> $createDevConsole();

    MCNAPI ::Json::Value $createGlobalVars(::gsl::not_null<Bedrock::NonOwnerPointer<const IUIDefRepository>>) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/SceneFactory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class BaseScreen;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IMinecraftGame;
class IUIDefRepository;
namespace Json { class Value; }
namespace OreUI { class SceneProvider; }
namespace SceneCreationUtils { class ScreenCreator; }
// clang-format on

class VanillaSceneFactory : public ::SceneFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<::std::shared_ptr<::BaseScreen>(::SceneCreationUtils::ScreenCreator&)>>
        mDevConsoleScreenFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaSceneFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaSceneFactory() /*override*/ = default;

    virtual ::Json::Value createGlobalVars(::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepository) const
        /*override*/;

    virtual ::std::shared_ptr<::AbstractScene> createDevConsole() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VanillaSceneFactory(
        ::IMinecraftGame&                                                minecraft,
        ::IClientInstance&                                               client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::OreUI::SceneProvider&                                          sceneProvider,
        ::brstd::move_only_function<::std::shared_ptr<::BaseScreen>(::SceneCreationUtils::ScreenCreator&)>&&
            devConsoleScreenFactory
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IMinecraftGame&                                                minecraft,
        ::IClientInstance&                                               client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::OreUI::SceneProvider&                                          sceneProvider,
        ::brstd::move_only_function<::std::shared_ptr<::BaseScreen>(::SceneCreationUtils::ScreenCreator&)>&&
            devConsoleScreenFactory
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Json::Value $createGlobalVars(::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepository) const;

    MCAPI ::std::shared_ptr<::AbstractScene> $createDevConsole();
    // NOLINTEND
};
#else // @header-generator platform
class VanillaSceneFactory {};
#endif // @header-generator platform
#endif // @header-generator platform
