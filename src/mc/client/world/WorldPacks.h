#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"

// auto generated forward declare list
// clang-format off
class IContentManagerContext;
struct ContentViews;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IContentManagerContext;
struct ContentViews;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct WorldPacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContentManagerContext>> mContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContentManagerContext>> mGlobalContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentViews>>           mTexturePackViews;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentViews>>           mBehaviorPackViews;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPacks& operator=(WorldPacks const&);
    WorldPacks(WorldPacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldPacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct WorldPacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mGlobalContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContentViews>>           mTexturePackViews;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContentViews>>           mBehaviorPackViews;
    // NOLINTEND
};
#else // @header-generator platform
struct WorldPacks {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
