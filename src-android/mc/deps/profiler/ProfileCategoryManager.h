#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class ProfileCategory; }
// clang-format on

namespace Bedrock::Profile {

class ProfileCategoryManager {
public:
    // ProfileCategoryManager inner types define
    using OnCategoryFunc = ::brstd::function_ref<void(const Core::Profile::ProfileCategory&)>;

    using OnMutableCategoryFunc = ::brstd::function_ref<void(Core::Profile::ProfileCategory&)>;
};

} // namespace Bedrock::Profile
