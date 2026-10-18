#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace AppExtensions { class IAppExtensions; }
// clang-format on

#endif // @header-generator platform
namespace AppExtensions {

#if defined(LL_PLAT_A) // @header-generator platform
class IAppExtensionsNonOwner {};
#else // @header-generator platform
class IAppExtensionsNonOwner {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAppExtensionsNonOwner() = default;

    virtual ::Bedrock::NonOwnerPointer<::AppExtensions::IAppExtensions> tryGetExtensions() const = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace AppExtensions
