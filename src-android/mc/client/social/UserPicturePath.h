#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLocation.h"

namespace Social {

class UserPicturePath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation> mLocation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UserPicturePath();

    MCNAPI std::string getFileSystem() const;

    MCNAPI ::Core::PathBuffer<std::string> getPath() const;

    MCNAPI bool isDefault() const;

    MCNAPI void setResourceLocation(::ResourceLocation const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Social
