#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IClientInstance;
class IMinecraftGame;
class SceneFactory;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IClientInstance;
class IMinecraftGame;
class SceneFactory;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace SceneCreationUtils {

#if defined(LL_PLAT_A) // @header-generator platform
class ScreenCreator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SceneFactory&>    mSceneFactory;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>  mMc;
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    ::ll::UntypedStorage<8, 24>                  mAdvancedGraphicsOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenCreator& operator=(ScreenCreator const&);
    ScreenCreator(ScreenCreator const&);
    ScreenCreator();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ScreenCreator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SceneFactory&>                                                  mSceneFactory;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                                mMc;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                               mClient;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const> mAdvancedGraphicsOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenCreator& operator=(ScreenCreator const&);
    ScreenCreator(ScreenCreator const&);
    ScreenCreator();
};
#else // @header-generator platform
class ScreenCreator {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace SceneCreationUtils
