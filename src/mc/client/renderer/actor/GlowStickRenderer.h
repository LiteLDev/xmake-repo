#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemStack;
class ScreenContext;
class Tessellator;
// clang-format on

class GlowStickRenderer {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string_view getTextureName(::ItemStack const&);

    MCNAPI static void renderInGui(::ScreenContext&, ::ItemStack const&, float, float);

    MCNAPI static void tessellateInWorld(::Tessellator&);
    // NOLINTEND
};
#else // @header-generator platform
class GlowStickRenderer {};
#endif // @header-generator platform
