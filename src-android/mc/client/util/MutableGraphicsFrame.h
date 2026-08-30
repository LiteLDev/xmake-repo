#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

class MutableGraphicsFrame {
public:
    // MutableGraphicsFrame inner types declare
    // clang-format off
    struct Lifetime;
    // clang-format on

    // MutableGraphicsFrame inner types define
    enum class SubmitError : int {};

    struct Lifetime {};

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
};
