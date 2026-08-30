#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/framebuilder/FrameConfiguration.h"
#include "mc/deps/minecraft_renderer/framebuilder/mcr/FrameContext.h"
#include "mc/deps/minecraft_renderer/resources/mcr/DeferredResourceTransactions.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct FrameDiscardContext; }
namespace mce::framebuilder { class PBRTextureDataManager; }
// clang-format on

namespace mce::framebuilder {

class FrameBuilderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::mcr::DeferredResourceTransactions>      deferredResourceTransactions;
    ::ll::TypedStorage<1, 1, ::mcr::FrameContext>                       frameContext;
    ::ll::TypedStorage<8, 64, ::mce::framebuilder::FrameConfiguration>  configuration;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::FrameDiscardContext>> discardContext;
    ::ll::UntypedStorage<8, 24>                                         pbrTextureDataManager;
    // NOLINTEND
};

} // namespace mce::framebuilder
