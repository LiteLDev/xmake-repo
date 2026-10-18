#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IView; }
namespace OreUI { struct ViewId; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IView; }
namespace OreUI { struct ViewId; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class IViewProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IViewProvider() = default;

    virtual ::Bedrock::NonOwnerPointer<OreUI::IView> get(::OreUI::ViewId) const = 0;

    virtual void discard(::OreUI::ViewId) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IViewProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IViewProvider() /*override*/ = default;

    virtual ::Bedrock::NonOwnerPointer<::OreUI::IView> get(::OreUI::ViewId viewId) const = 0;

    virtual void discard(::OreUI::ViewId viewId) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IViewProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
