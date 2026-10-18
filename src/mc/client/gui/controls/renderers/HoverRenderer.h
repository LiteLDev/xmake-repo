#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class NinePatchLayer;
class UIControl;
class UIPropertyBag;
class UIScene;
// clang-format on

class HoverRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mContent;
    ::ll::TypedStorage<8, 24, std::string>                            mFormattedContent;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mCursorPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mBoxDimensions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<NinePatchLayer>>         mLayer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HoverRenderer();

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HoverRenderer();

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0>
    _getNewCursorPosition(::IClientInstance&, ::UIControl&, ::UIScene const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::glm::vec<2, float, (glm::qualifier)0> const& DEFAULT_OFFSET();

    MCNAPI static ::glm::vec<2, float, (glm::qualifier)0> const& GAMEPAD_OFFSET();

    MCNAPI static float const& HOVERBOX_PADSIZE();

    MCNAPI static float const& ICON_WIDTH();
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class NinePatchLayer;
class UIControl;
class UIScene;
// clang-format on

class HoverRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                      mContent;
    ::ll::TypedStorage<8, 32, ::std::string>                      mFormattedContent;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                         mCursorPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                         mOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                         mBoxDimensions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NinePatchLayer>> mLayer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) = 0;

    virtual ~HoverRenderer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::glm::vec2
    _getNewCursorPosition(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class HoverRenderer {};
#endif // @header-generator platform
#endif // @header-generator platform
