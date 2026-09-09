#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IGeometryAtlas.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"

namespace GeometryAtlas {

class NullAtlas : public ::GeometryAtlas::IGeometryAtlas {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mPublisher;
    // NOLINTEND
};

} // namespace GeometryAtlas
