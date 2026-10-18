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
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class Color; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTextPrimitive : public ::ScriptModuleMinecraft::ScriptPrimitiveShape {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint const>                                        mMaxTextLength;
    ::ll::TypedStorage<4, 4, uint const>                                        mMaxTextLines;
    ::ll::TypedStorage<8, 40, std::variant<std::string, TextObjectRoot>>        mText;
    ::ll::TypedStorage<8, 24, std::string>                                      mTextObjectString;
    ::ll::TypedStorage<1, 1, bool>                                              mUseRotation;
    ::ll::TypedStorage<8, 32, std::optional<ScriptModuleMinecraft::ScriptRGBA>> mBackgroundColor;
    ::ll::TypedStorage<1, 1, bool>                                              mDepthTest;
    ::ll::TypedStorage<1, 1, bool>                                              mShowBackface;
    ::ll::TypedStorage<1, 1, bool>                                              mShowTextBackface;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint const>                                            mMaxTextLength;
    ::ll::TypedStorage<4, 4, uint const>                                            mMaxTextLines;
    ::ll::TypedStorage<8, 40, ::std::variant<::std::string, ::TextObjectRoot>>      mText;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mTextObjectString;
    ::ll::TypedStorage<1, 1, bool>                                                  mUseRotation;
    ::ll::TypedStorage<8, 32, ::std::optional<::ScriptModuleMinecraft::ScriptRGBA>> mBackgroundColor;
    ::ll::TypedStorage<1, 1, bool>                                                  mDepthTest;
    ::ll::TypedStorage<1, 1, bool>                                                  mShowBackface;
    ::ll::TypedStorage<1, 1, bool>                                                  mShowTextBackface;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptTextPrimitive();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptTextPrimitive();
#else // @header-generator platform
    virtual void populatePacketData(::PrimitiveShapeDataPayload& packetShapeData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void populatePacketData(::PrimitiveShapeDataPayload&) const;

    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const&);
#else // @header-generator platform
    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const& existing) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptTextPrimitive();

    MCNAPI ScriptTextPrimitive(
        std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&,
        std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface> const&,
        bool,
        uint,
        uint
#else // @header-generator platform
    MCAPI ScriptTextPrimitive(
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const&          location,
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> const& text,
        bool                                                                                     isDebugShape,
        uint                                                                                     maxTextLength,
        uint                                                                                     maxTextLines
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScriptModuleMinecraft::ScriptRGBA> const& getBackgroundColorOverride() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string const& getLocalizedText() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<mce::Color> getBackgroundMCEColor() const;
#else // @header-generator platform
    MCAPI ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> getText() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptRawMessageError, ::Scripting::ArgumentOutOfBoundsError>
        setText(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> const& text);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(
        std::variant<ScriptModuleMinecraft::ScriptDimensionLocation, Vec3> const&,
        std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface> const&,
        bool,
        uint,
        uint
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const&          location,
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> const& text,
        bool                                                                                     isDebugShape,
        uint                                                                                     maxTextLength,
        uint                                                                                     maxTextLines
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $populatePacketData(::PrimitiveShapeDataPayload&) const;
#else // @header-generator platform
    MCAPI void $populatePacketData(::PrimitiveShapeDataPayload& packetShapeData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyUpdatedData(::PrimitiveShapeDataPayload const&);
#else // @header-generator platform
    MCAPI void $applyUpdatedData(::PrimitiveShapeDataPayload const& existing);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
