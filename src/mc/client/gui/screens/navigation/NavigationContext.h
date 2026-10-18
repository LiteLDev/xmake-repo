#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Screens::Navigation {

#if defined(LL_PLAT_A) // @header-generator platform
class NavigationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>               mUserManager;
    ::ll::UntypedStorage<8, 24>               mSceneStack;
    ::ll::TypedStorage<8, 8, ::SceneFactory&> mSceneFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigationContext& operator=(NavigationContext const&);
    NavigationContext(NavigationContext const&);
    NavigationContext();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class NavigationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack>>          mSceneStack;
    ::ll::TypedStorage<8, 8, ::SceneFactory&>                                        mSceneFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigationContext& operator=(NavigationContext const&);
    NavigationContext(NavigationContext const&);
    NavigationContext();
};
#else // @header-generator platform
class NavigationContext {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Screens::Navigation
