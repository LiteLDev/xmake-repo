#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonMergeStrategy.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
// clang-format on

namespace TickingTextureFactory {

class TickingTextureMergeStrategy : public ::JsonMergeStrategy {
public:
    // TickingTextureMergeStrategy inner types define
    using ErrorCallback = std::function<void(const std::string&, const LoadedResourceData&, const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mErrorCallback;
    // NOLINTEND
};

} // namespace TickingTextureFactory
