#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/materials/definition/SamplerStateIntrinsic.h"
#include "mc/external/render_dragon/resources/SamplerDescription.h"
#include "mc/external/render_dragon/resources/TextureUsage.h"

namespace dragon {

struct TextureSamplerDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::dragon::SamplerDescription> mSampler;
    ::ll::TypedStorage<8, 8, ::dragon::TextureUsage>       mTextureUsage;
    ::ll::TypedStorage<1, 1, bool>                         mRestrictMips;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureSamplerDescription(
        ::dragon::materials::definition::SamplerStateIntrinsic const&,
        ::dragon::TextureUsage const,
        bool const
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::dragon::materials::definition::SamplerStateIntrinsic const&, ::dragon::TextureUsage const, bool const);
    // NOLINTEND
};

} // namespace dragon
