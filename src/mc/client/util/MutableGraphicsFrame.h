#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/deps/minecraft_renderer/framebuilder/FrameConfiguration.h"
#include "mc/deps/minecraft_renderer/framebuilder/MaterialFilterEnsuredResourceContainer.h"
#include "mc/external/render_dragon/endstone/Result.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
struct PlayerRenderingParameters;
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
namespace mce::framebuilder { class FrameBuilder; }
namespace mcr { struct DeferredResourceTransactions; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class MutableGraphicsFrame {
public:
    // MutableGraphicsFrame inner types declare
    // clang-format off
    struct Lifetime;
    // clang-format on

    // MutableGraphicsFrame inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class InsertError : int {};

#endif // @header-generator platform
    enum class SubmitError : int {};

    struct Lifetime {};
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<MutableGraphicsFrame::Lifetime>> mLifetime;
    ::ll::UntypedStorage<8, 40> mFrameBuilder;
    ::ll::TypedStorage<8, 64, ::mce::framebuilder::FrameConfiguration> mCurrentConfiguration;
    ::ll::TypedStorage<8, 16, ::mce::framebuilder::bgfxbridge::MaterialFilterEnsuredResourceContainer> mBgfxBridgeResources;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MutableGraphicsFrame();

    MCNAPI ~MutableGraphicsFrame();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
