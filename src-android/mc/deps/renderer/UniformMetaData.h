#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/ShaderPrimitiveTypes.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ConstantBufferMetaData; }
// clang-format on

namespace mce {

class UniformMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                           numberOfElements;
    ::ll::TypedStorage<4, 4, uint>                           byteOffset;
    ::ll::TypedStorage<1, 1, ::mce::ShaderPrimitiveTypes>    shaderPrimitiveType;
    ::ll::TypedStorage<8, 8, ::mce::ConstantBufferMetaData*> constantBufferMetaDataParent;
    ::ll::TypedStorage<8, 24, std::string>                   uniformName;
    // NOLINTEND

public:
    // prevent constructor by default
    UniformMetaData& operator=(UniformMetaData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint getUniformSize() const;
    // NOLINTEND
};

} // namespace mce
