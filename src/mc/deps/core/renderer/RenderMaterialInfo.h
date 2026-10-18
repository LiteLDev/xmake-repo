#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderMaterial; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderMaterial; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderMaterialInfo : public ::std::enable_shared_from_this<mce::RenderMaterialInfo> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                      mHashedName;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::RenderMaterial>> mPtr;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderMaterialInfo : public ::std::enable_shared_from_this<::mce::RenderMaterialInfo> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                          mHashedName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::RenderMaterial>> mPtr;
    // NOLINTEND
};
#else // @header-generator platform
class RenderMaterialInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
