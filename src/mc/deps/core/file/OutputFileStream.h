#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileStream.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class PathView; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
class OutputFileStream : public ::Core::FileStream {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OutputFileStream();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

#else // @header-generator platform
class OutputFileStream : public ::Core::FileStream, public virtual ::std::ios {
#endif // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
