#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/UniformMetaData.h"

namespace mce {

class ConstantBufferMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                       constantBufferName;
    ::ll::TypedStorage<8, 24, std::vector<mce::UniformMetaData>> uniformMetaData;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantBufferMetaData& operator=(ConstantBufferMetaData const&);
};

} // namespace mce
