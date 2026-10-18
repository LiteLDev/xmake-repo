#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Gameface { class UserImageData; }
namespace mce { class UUID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class IMinimapResourceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMinimapResourceProvider() = default;

    virtual bool prepareUserImage(::mce::UUID const& minimapId, ::Gameface::UserImageData& userImageData) = 0;

    virtual void updateMinimap(::mce::UUID const& minimapId) = 0;

    virtual void update() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IMinimapResourceProvider {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
