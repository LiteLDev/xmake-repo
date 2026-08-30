#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/HangingSignModel.h"
#include "mc/client/renderer/blockactor/SignRenderer.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
struct BlockActorRenderData;
namespace mce { class TextureGroup; }
// clang-format on

class HangingSignRenderer : public ::SignRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 4088, ::HangingSignModel> mHangingSignModel;
    // NOLINTEND

public:
    // prevent constructor by default
    HangingSignRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HangingSignRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);

    virtual float _getScaleFactor() const;

    virtual float _yTextOffset() const;

    virtual float _zTextOffset() const;

    virtual int _getSignWidth() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HangingSignRenderer(std::shared_ptr<mce::TextureGroup>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroup>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::BaseActorRenderContext&, ::BlockActorRenderData&);

    MCNAPI float $_getScaleFactor() const;

    MCNAPI float $_yTextOffset() const;

    MCNAPI float $_zTextOffset() const;

    MCNAPI int $_getSignWidth() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
