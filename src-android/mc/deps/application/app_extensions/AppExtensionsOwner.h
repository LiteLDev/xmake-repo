#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/app_extensions/IAppExtensionsNonOwner.h"

// auto generated forward declare list
// clang-format off
namespace AppExtensions { class IAppExtensions; }
// clang-format on

namespace AppExtensions {

class AppExtensionsOwner : public ::AppExtensions::IAppExtensionsNonOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<AppExtensions::IAppExtensions>> mExtensions;
    // NOLINTEND
};

} // namespace AppExtensions
