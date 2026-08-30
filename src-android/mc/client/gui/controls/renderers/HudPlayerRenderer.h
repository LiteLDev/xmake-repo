#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIScene;
// clang-format on

class HudPlayerRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>             mRenderTime;
    ::ll::TypedStorage<4, 4, float>             mLastTimeStamp;
    ::ll::TypedStorage<8, 24, std::vector<int>> mPlayerArmorState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudPlayerRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& HEAD_BODY_Y_BASE_ROT();

    MCNAPI static float const& PLAYER_DOLL_SWIM_OFFSET();

    MCNAPI static float const& POST_STATE_VISIBLE_TIME_ARMOR();

    MCNAPI static float const& POST_STATE_VISIBLE_TIME_EMOTING();

    MCNAPI static float const& POST_STATE_VISIBLE_TIME_FLYING();

    MCNAPI static float const& POST_STATE_VISIBLE_TIME_GLIDING();

    MCNAPI static float const& POST_STATE_VISIBLE_TIME_SNEAKING();

    MCNAPI static float const& POST_STATE_VISIBLE_TIME_SPRINTING();

    MCNAPI static float const& POST_STATE_VISIBLE_TIME_SWIMMING();
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

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
