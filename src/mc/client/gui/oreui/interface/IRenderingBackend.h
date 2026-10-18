#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/gameface/renoir/RendererBackend.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/gameface/renoir/RendererBackend.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderGroup; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class IRenderingBackend : public ::renoir::RendererBackend {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeStaticResources(::Bedrock::NonOwnerPointer<mce::ShaderGroup> const&) = 0;

    virtual void onAppPreSuspended() = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IRenderingBackend : public ::renoir::RendererBackend {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeStaticResources(::Bedrock::NonOwnerPointer<::mce::ShaderGroup> const&) = 0;

    virtual void onAppPreSuspended() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IRenderingBackend {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
