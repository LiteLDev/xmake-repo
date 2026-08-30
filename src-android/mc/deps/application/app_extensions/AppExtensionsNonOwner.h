#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/app_extensions/IAppExtensionsNonOwner.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace AppExtensions { class IAppExtensions; }
// clang-format on

namespace AppExtensions {

class AppExtensionsNonOwner : public ::AppExtensions::IAppExtensionsNonOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mExtensions;
    // NOLINTEND
};

} // namespace AppExtensions
