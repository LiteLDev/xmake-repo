#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace mce { class MaterialPtr; }
namespace mce { class RenderContext; }
namespace rendergraph { class DeclarationInterface; }
// clang-format on

struct PostprocessRenderModule {
public:
    // PostprocessRenderModule inner types define
    using PreRenderCallback = std::function<void(mce::RenderContext&, IClientInstance&)>;
};
