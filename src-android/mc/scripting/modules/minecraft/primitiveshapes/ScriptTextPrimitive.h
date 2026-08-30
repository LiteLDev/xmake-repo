#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptRGBA.h"
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptPrimitiveShape.h"
#include "mc/textobject/TextObjectRoot.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct PrimitiveShapeDataPayload;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace mce { class Color; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTextPrimitive : public ::ScriptModuleMinecraft::ScriptPrimitiveShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const>                                        mMaxTextLength;
    ::ll::TypedStorage<4, 4, uint const>                                        mMaxTextLines;
    ::ll::TypedStorage<8, 40, std::variant<std::string, TextObjectRoot>>        mText;
    ::ll::TypedStorage<8, 24, std::string>                                      mTextObjectString;
    ::ll::TypedStorage<1, 1, bool>                                              mUseRotation;
    ::ll::TypedStorage<8, 32, std::optional<ScriptModuleMinecraft::ScriptRGBA>> mBackgroundColor;
    ::ll::TypedStorage<1, 1, bool>                                              mDepthTest;
    ::ll::TypedStorage<1, 1, bool>                                              mShowBackface;
    ::ll::TypedStorage<1, 1, bool>                                              mShowTextBackface;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptTextPrimitive();

    virtual void populatePacketData(::PrimitiveShapeDataPayload&) const;

    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptTextPrimitive();

    MCNAPI ScriptTextPrimitive(
        std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&,
        std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface> const&,
        bool,
        uint,
        uint
    );

    MCNAPI std::optional<ScriptModuleMinecraft::ScriptRGBA> const& getBackgroundColorOverride() const;

    MCNAPI std::optional<mce::Color> getBackgroundMCEColor() const;

    MCNAPI bool getDepthTest() const;

    MCNAPI std::string const& getLocalizedText() const;

    MCNAPI uint getMaxLines() const;

    MCNAPI uint getMaxTextLength() const;

    MCNAPI bool getShowBackface() const;

    MCNAPI bool getShowTextBackface() const;

    MCNAPI std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface> getText() const;

    MCNAPI bool getUseRotation() const;

    MCNAPI void setBackgroundColorOverride(std::optional<ScriptModuleMinecraft::ScriptRGBA> const&);

    MCNAPI void setDepthTest(bool);

    MCNAPI void setShowBackface(bool);

    MCNAPI void setShowTextBackface(bool);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptRawMessageError, Scripting::ArgumentOutOfBoundsError>
    setText(std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface> const&);

    MCNAPI void setUseRotation(bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(
        std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&,
        std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface> const&,
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
    MCNAPI void $populatePacketData(::PrimitiveShapeDataPayload&) const;

    MCNAPI void $applyUpdatedData(::PrimitiveShapeDataPayload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
