#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rendergraph {

struct ResourceBinding {
public:
    // ResourceBinding inner types define
    enum class AccessType : int {
        UNSPECIFIED = 0,
        WAIT        = 1,
        READ        = 2,
        WRITE       = 3,
        CREATE      = 4,
    };

    enum class ResourceType : int {
        UNSPECIFIED = 0,
        TEXTURE     = 1,
        BUFFER      = 2,
    };

    enum class ShaderStage : int {
        UNSPECIFIED      = 0,
        PIXEL_SHADER     = 1,
        NON_PIXEL_SHADER = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::rendergraph::ResourceBinding::AccessType>   mAccessType;
    ::ll::TypedStorage<4, 4, ::rendergraph::ResourceBinding::ResourceType> mResourceType;
    ::ll::TypedStorage<4, 4, ::rendergraph::ResourceBinding::ShaderStage>  mShaderStage;
    ::ll::TypedStorage<4, 4, int>                                          mIndex;
    // NOLINTEND
};

} // namespace rendergraph
