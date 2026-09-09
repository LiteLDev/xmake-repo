#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

namespace VolumeInstanceData {

struct VolumeStorageDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mJsonIdentifier;
    ::ll::TypedStorage<8, 24, std::string> mInstanceName;
    ::ll::TypedStorage<4, 12, ::Vec3>      mMin;
    ::ll::TypedStorage<4, 12, ::Vec3>      mMax;
    ::ll::TypedStorage<4, 4, int>          mDimension;
    // NOLINTEND
};

} // namespace VolumeInstanceData
