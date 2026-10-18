#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace renoir { class IStreamReader; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_C) // @header-generator platform
class IFileManipulator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFileManipulator() = default;

    virtual bool EnumerateFolder(char const* path) = 0;

    virtual char const* NextFile() = 0;

    virtual ::renoir::IStreamReader* OpenFile(char const* path) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IFileManipulator {};
#endif // @header-generator platform

} // namespace renoir
#endif // @header-generator platform
