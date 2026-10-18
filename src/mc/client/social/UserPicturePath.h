#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLocation.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class UserPicturePath {};
#endif // @header-generator platform

} // namespace Social
