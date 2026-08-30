#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
