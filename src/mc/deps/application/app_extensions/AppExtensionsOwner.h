#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/app_extensions/IAppExtensionsNonOwner.h"

// auto generated forward declare list
// clang-format off
namespace AppExtensions { class IAppExtensions; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/app_extensions/IAppExtensionsNonOwner.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace AppExtensions { class IAppExtensions; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace AppExtensions {

#if defined(LL_PLAT_A) // @header-generator platform
class AppExtensionsOwner : public ::AppExtensions::IAppExtensionsNonOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<AppExtensions::IAppExtensions>> mExtensions;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class AppExtensionsOwner : public ::AppExtensions::IAppExtensionsNonOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc315e5;
    // NOLINTEND

public:
    // prevent constructor by default
    AppExtensionsOwner& operator=(AppExtensionsOwner const&);
    AppExtensionsOwner(AppExtensionsOwner const&);
    AppExtensionsOwner();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::NonOwnerPointer<::AppExtensions::IAppExtensions> tryGetExtensions() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::NonOwnerPointer<::AppExtensions::IAppExtensions> $tryGetExtensions() const;
    // NOLINTEND
};
#else // @header-generator platform
class AppExtensionsOwner {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace AppExtensions
