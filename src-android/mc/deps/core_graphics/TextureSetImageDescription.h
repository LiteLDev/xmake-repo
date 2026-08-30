#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/ColorChannel.h"
#include "mc/deps/core_graphics/ImageDescription.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
namespace cg { class TextureSetDefinition; }
// clang-format on

namespace cg {

class TextureSetImageDescription {
public:
    // TextureSetImageDescription inner types declare
    // clang-format off
    class LayerInfoVar;
    // clang-format on

    // TextureSetImageDescription inner types define
    class LayerInfoVar {
    public:
        // LayerInfoVar inner types define
        using Var = std::variant<cg::ImageDescription, ColorChannel, mce::Color>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType>                                     mLayerType;
        ::ll::TypedStorage<4, 24, std::variant<cg::ImageDescription, ColorChannel, mce::Color>> mData;
        // NOLINTEND

    public:
        // prevent constructor by default
        LayerInfoVar(LayerInfoVar const&);
        LayerInfoVar();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool isColor() const;

        MCNAPI bool isColorChannel() const;

        MCNAPI bool isImage() const;

        MCNAPI ::cg::TextureSetImageDescription::LayerInfoVar&
        operator=(::cg::TextureSetImageDescription::LayerInfoVar const&);
        // NOLINTEND
    };

    using LayerInfoVarList = std::vector<cg::TextureSetImageDescription::LayerInfoVar>;

    using LayerInfoVarListIterator = const cg::TextureSetImageDescription::LayerInfoVar*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<cg::TextureSetImageDescription::LayerInfoVar>> mLayerInfo;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureSetImageDescription();

    MCNAPI explicit TextureSetImageDescription(::gsl::not_null<const cg::TextureSetDefinition*> const);

    MCNAPI explicit TextureSetImageDescription(::cg::ImageDescription const&);

    MCNAPI const cg::TextureSetImageDescription::LayerInfoVar* const begin() const;

    MCNAPI const cg::TextureSetImageDescription::LayerInfoVar* const end() const;

    MCNAPI ulong const getLayerCount() const;

    MCNAPI ::cg::TextureSetImageDescription::LayerInfoVar const*
    tryGetLayerInfo(::cg::TextureSetLayerType const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::gsl::not_null<const cg::TextureSetDefinition*> const);

    MCNAPI void* $ctor(::cg::ImageDescription const&);
    // NOLINTEND
};

} // namespace cg
