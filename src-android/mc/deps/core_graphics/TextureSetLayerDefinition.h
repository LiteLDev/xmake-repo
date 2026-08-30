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
    using TextureSetLayerInfoVariant = std::variant<ResourceLocationPair, ColorChannel, mce::Color>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112>                        mData;
    ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType> mLayerType;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureSetLayerDefinition& operator=(TextureSetLayerDefinition const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextureSetLayerDefinition();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _setValue(std::variant<ResourceLocationPair, ColorChannel, mce::Color> const&);

    MCNAPI ::cg::TextureSetLayerType const& getLayerType() const;

    MCNAPI std::optional<std::string> hasValidationError() const;

    MCNAPI bool isColor() const;

    MCNAPI bool isColorChannel() const;

    MCNAPI bool isResourceLocation() const;

    MCNAPI bool isUniform() const;
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

} // namespace cg
