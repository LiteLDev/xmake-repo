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
#if defined(LL_PLAT_A) // @header-generator platform
    // ProfileCategoryManager inner types define
    using OnCategoryFunc = ::brstd::function_ref<void(const Core::Profile::ProfileCategory&)>;
#else // @header-generator platform
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Profile::ProfileCategory* findMutable(::std::string_view categoryName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using OnMutableCategoryFunc = ::brstd::function_ref<void(Core::Profile::ProfileCategory&)>;
#else // @header-generator platform
    MCNAPI static void
    forEachCategoryMutable(::brstd::function_ref<void(::Core::Profile::ProfileCategory&)> const& func);

    MCNAPI static uchar getAnnotationFlagsFromString(::std::string_view str);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Bedrock::Profile
