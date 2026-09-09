#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/BaseCyclingComponent.h"
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class SpriteComponent;
class UIComponent;
class UIControl;
// clang-format on

class ImageCyclingComponent : public ::BaseCyclingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> mImageLocations;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageCyclingComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImageCyclingComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void _updateSubPage();

    virtual void _postCreate();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setImageLocations(std::vector<ResourceLocation>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<UIComponent> $clone(::UIControl&) const;

    MCNAPI void $_updateSubPage();

    MCNAPI void $_postCreate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
