#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/scripting/BasePrimitivePosition.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Quaternion.h"
#include "mc/deps/input/InputMode.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/scripting/PrimitiveType.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class Vec3;
namespace Scripting::RenderHelper { struct Vertex; }
// clang-format on

namespace Scripting::RenderHelper {

class TextPrimitive : public ::Scripting::RenderHelper::BasePrimitivePosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, std::optional<Quaternion>> mRotation;
    ::ll::TypedStorage<8, 24, std::string>               mText;
    ::ll::TypedStorage<8, 24, std::string>               mCachedText;
    ::ll::TypedStorage<4, 4, ::InputMode>                mCachedInputMode;
    ::ll::TypedStorage<4, 4, ::NewInteractionModel>      mCachedInteractionModel;
    ::ll::TypedStorage<4, 4, float>                      mScale;
    ::ll::TypedStorage<4, 20, std::optional<mce::Color>> mBackgroundColor;
    ::ll::TypedStorage<1, 1, bool>                       mDepthTest;
    ::ll::TypedStorage<1, 1, bool>                       mShowBackface;
    ::ll::TypedStorage<1, 1, bool>                       mShowTextBackface;
    ::ll::TypedStorage<4, 4, uint>                       mMaxTextLength;
    ::ll::TypedStorage<4, 4, uint>                       mMaxLines;
    // NOLINTEND

public:
    // prevent constructor by default
    TextPrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextPrimitive();

    virtual ::Scripting::RenderHelper::PrimitiveType getType() const;

    virtual void _rebuild(float);

    virtual void _getVertices(float, std::vector<Scripting::RenderHelper::Vertex>&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextPrimitive(
        ::Vec3 const&,
        float,
        std::string const&,
        ::mce::Color const&,
        std::optional<Quaternion> const&,
        std::optional<mce::Color> const&,
        bool,
        bool,
        bool,
        uint,
        uint
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Vec3 const&,
        float,
        std::string const&,
        ::mce::Color const&,
        std::optional<Quaternion> const&,
        std::optional<mce::Color> const&,
        bool,
        bool,
        bool,
        uint,
        uint
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::RenderHelper::PrimitiveType $getType() const;

    MCNAPI void $_rebuild(float);

    MCNAPI void $_getVertices(float, std::vector<Scripting::RenderHelper::Vertex>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::RenderHelper
