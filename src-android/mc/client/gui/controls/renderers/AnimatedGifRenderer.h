#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/AnimatedGif.h"
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/gui/screens/UIBatchType.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIScene;
// clang-format on

class AnimatedGifRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                 mFilePath;
    ::ll::TypedStorage<1, 1, bool>                         mSourceChanged;
    ::ll::UntypedStorage<1, 7>                             mUseAnimations;
    ::ll::UntypedStorage<1, 24>                            mFrameTexture;
    ::ll::TypedStorage<8, 136, std::optional<AnimatedGif>> mAnimatedGif;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                mTaskGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnimatedGifRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual ::UIBatchType getBatchType() const;

    virtual int getCustomId() const;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnimatedGifRenderer();
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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<UICustomRenderer> $clone() const;

    MCNAPI bool $update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    MCNAPI ::UIBatchType $getBatchType() const;

    MCNAPI int $getCustomId() const;

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
