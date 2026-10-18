#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/IFileManipulator.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
class IFileSystemReader {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IFileSystemReader : public ::renoir::IFileManipulator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFileSystemReader() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class IFileSystemReader {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
