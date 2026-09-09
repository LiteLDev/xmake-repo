#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ComponentRenderBatch.h"
#include "mc/client/gui/screens/RenderControlMetadata.h"
#include "mc/client/gui/screens/TextureState.h"

// auto generated forward declare list
// clang-format off
class CustomRenderComponent;
class GridComponent;
class SpriteComponent;
class TextComponent;
class UIControl;
class UICustomRenderer;
class UIRenderContext;
struct BatchClippingState;
struct BatchKey;
struct BatchVisualState;
struct ClippedControlMetadata;
// clang-format on

class ScreenRenderBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<RenderControlMetadata>>      mRenderControls;
    ::ll::TypedStorage<8, 24, std::vector<ComponentRenderBatch>>       mRenderBatches;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, TextureState>> mTextureStates;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _addRenderControl(
        ::UIControl&,
        ::BatchClippingState const&,
        ::BatchVisualState const&,
        ::ClippedControlMetadata&,
        bool
    );

    MCNAPI bool _populateRenderControlsCollection(
        ::UIControl&,
        ::BatchClippingState const&,
        ::BatchClippingState const&,
        ::BatchVisualState const&,
        ::ClippedControlMetadata&,
        bool
    );

    MCNAPI void _storeTextureState(::UIControl&, bool);

    MCNAPI ~ScreenRenderBatch();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BatchKey createBatchKey(::UICustomRenderer const&, int, float, int, ::BatchClippingState const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<std::string, std::pair<int, int>>& GRID_DIMENSIONS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
