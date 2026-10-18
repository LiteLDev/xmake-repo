#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
namespace mce { class RenderMaterialInfo; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
namespace mce { class RenderMaterialInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderMaterialGroupBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderMaterialGroupBase() = default;

    virtual ::mce::RenderMaterialInfo& getMaterialInfo(::HashedString const&) = 0;

    virtual void clearMaterial(::HashedString const&) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderMaterialGroupBase {
public:
    // RenderMaterialGroupBase inner types define
    using MaterialMap = ::std::unordered_map<::HashedString, ::std::shared_ptr<::mce::RenderMaterialInfo>>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderMaterialGroupBase() = default;

    virtual ::mce::RenderMaterialInfo& getMaterialInfo(::HashedString const& name) = 0;

    virtual void clearMaterial(::HashedString const& name) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class RenderMaterialGroupBase {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
