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
#if defined(LL_PLAT_A) // @header-generator platform
        using Var = std::variant<cg::ImageDescription, ColorChannel, mce::Color>;
#else // @header-generator platform
        using Var = ::std::variant<::cg::ImageDescription, ::ColorChannel, ::mce::Color>;
#endif // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType>                                             mLayerType;
        ::ll::TypedStorage<4, 24, ::std::variant<::cg::ImageDescription, ::ColorChannel, ::mce::Color>> mData;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using LayerInfoVarList = std::vector<cg::TextureSetImageDescription::LayerInfoVar>;
#else // @header-generator platform
    using LayerInfoVarList = ::std::vector<::cg::TextureSetImageDescription::LayerInfoVar>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using LayerInfoVarListIterator = const cg::TextureSetImageDescription::LayerInfoVar*;
#else // @header-generator platform
    using LayerInfoVarListIterator = ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::cg::TextureSetImageDescription::LayerInfoVar>>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<cg::TextureSetImageDescription::LayerInfoVar>> mLayerInfo;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::cg::TextureSetImageDescription::LayerInfoVar>> mLayerInfo;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    TextureSetImageDescription();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TextureSetImageDescription();

    MCNAPI explicit TextureSetImageDescription(::gsl::not_null<const cg::TextureSetDefinition*> const);

    MCNAPI explicit TextureSetImageDescription(::cg::ImageDescription const&);

    MCNAPI const cg::TextureSetImageDescription::LayerInfoVar* const begin() const;

    MCNAPI const cg::TextureSetImageDescription::LayerInfoVar* const end() const;

    MCNAPI ulong const getLayerCount() const;

    MCNAPI ::cg::TextureSetImageDescription::LayerInfoVar const*
    tryGetLayerInfo(::cg::TextureSetLayerType const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit TextureSetImageDescription(::cg::ImageDescription const& imageDesc);

    MCAPI explicit TextureSetImageDescription(::gsl::not_null<::cg::TextureSetDefinition const*> textureSet);

    MCAPI ~TextureSetImageDescription();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::cg::ImageDescription const& imageDesc);

    MCAPI void* $ctor(::gsl::not_null<::cg::TextureSetDefinition const*> textureSet);
#endif
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<const cg::TextureSetDefinition*> const);

    MCNAPI void* $ctor(::cg::ImageDescription const&);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cg
