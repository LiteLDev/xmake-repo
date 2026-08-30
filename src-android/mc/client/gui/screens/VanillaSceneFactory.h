#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
