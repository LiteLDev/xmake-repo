#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/ColorChannel.h"
#include "mc/deps/core/resource/ResourceLocationPair.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

namespace cg {

class TextureSetLayerDefinition : public ::Bedrock::EnableNonOwnerReferences {
public:
    // TextureSetLayerDefinition inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using TextureSetLayerInfoVariant = std::variant<ResourceLocationPair, ColorChannel, mce::Color>;
#else // @header-generator platform
    using TextureSetLayerInfoVariant = ::std::variant<::ResourceLocationPair, ::ColorChannel, ::mce::Color>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 112>                        mData;
    ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType> mLayerType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 120, ::std::variant<::ResourceLocationPair, ::ColorChannel, ::mce::Color>> mData;
    ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType>                                              mLayerType;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    TextureSetLayerDefinition& operator=(TextureSetLayerDefinition const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureSetLayerDefinition();
    // NOLINTEND

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    TextureSetLayerDefinition();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setValue(std::variant<ResourceLocationPair, ColorChannel, mce::Color> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI TextureSetLayerDefinition(
        ::cg::TextureSetLayerType const&                                            type,
        ::std::variant<::ResourceLocationPair, ::ColorChannel, ::mce::Color> const& var
    );

    MCAPI ::std::optional<::std::string> hasValidationError() const;
#endif
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cg::TextureSetLayerType const& getLayerType() const;

    MCNAPI std::optional<std::string> hasValidationError() const;

    MCNAPI bool isColor() const;

    MCNAPI bool isColorChannel() const;

    MCNAPI bool isResourceLocation() const;

    MCNAPI bool isUniform() const;
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::cg::TextureSetLayerType const&                                            type,
        ::std::variant<::ResourceLocationPair, ::ColorChannel, ::mce::Color> const& var
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
