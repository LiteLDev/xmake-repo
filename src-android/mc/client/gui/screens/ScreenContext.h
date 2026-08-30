#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/UIScreenContext.h"
#include "mc/deps/core/memory/LinearAllocator.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MeshContext.h"

// auto generated forward declare list
// clang-format off
class CommandListQueue;
class GuiData;
class MinecraftGameplayGraphicsResources;
class MinecraftGraphics;
class ProfanityContext;
class Tessellator;
struct FrameRenderObject;
namespace mce { class Clock; }
namespace mce { class FrameBufferObject; }
namespace mce { struct FrameDiscardContext; }
namespace mce { struct ViewportInfo; }
// clang-format on

class ScreenContext : public ::UIScreenContext, public ::mce::MeshContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::FrameBufferObject*>                 frameBufferObject;
    ::ll::TypedStorage<8, 8, ::mce::ViewportInfo const&>                viewport;
    ::ll::UntypedStorage<8, 24>                                         guiData;
    ::ll::TypedStorage<8, 8, ::mce::Clock const&>                       clock;
    ::ll::TypedStorage<8, 8, ::Tessellator&>                            tessellator;
    ::ll::UntypedStorage<8, 24>                                         minecraftGraphics;
    ::ll::UntypedStorage<8, 24>                                         profanityContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::FrameDiscardContext>> frameDiscardContext;
    ::ll::TypedStorage<1, 1, bool>                                      isCapturingPanorama;
    ::ll::TypedStorage<8, 8, ::CommandListQueue&>                       commandListQueue;
    ::ll::TypedStorage<8, 8, ::LinearAllocator<FrameRenderObject>&>     frameAllocator;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScreenContext(::ScreenContext&&);

    MCNAPI ScreenContext(
        ::mce::ViewportInfo const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>>,
        ::mce::Clock const&,
        ::Tessellator&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftGraphics>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>> const&,
        ::CommandListQueue&,
        ::LinearAllocator<FrameRenderObject>&,
        ::mce::MeshContext&,
        int const,
        int const,
        float const
    );

    MCNAPI ::MinecraftGameplayGraphicsResources& getMinecraftGameplayGraphicsResources();

    MCNAPI ~ScreenContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScreenContext&&);

    MCNAPI void* $ctor(
        ::mce::ViewportInfo const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>>,
        ::mce::Clock const&,
        ::Tessellator&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<MinecraftGraphics>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ProfanityContext>> const&,
        ::CommandListQueue&,
        ::LinearAllocator<FrameRenderObject>&,
        ::mce::MeshContext&,
        int const,
        int const,
        float const
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
