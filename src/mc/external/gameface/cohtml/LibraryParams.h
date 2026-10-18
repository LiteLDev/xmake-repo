#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/LibraryParamsWithExternalRenderingLibrary.h"
#include "mc/external/gameface/renoir/CommonRenderingLibraryParams.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IFileSystemReader; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/LibraryParamsWithExternalRenderingLibrary.h"
#include "mc/external/gameface/renoir/CommonRenderingLibraryParams.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
struct LibraryParams : public ::cohtml::LibraryParamsWithExternalRenderingLibrary,
                       public ::renoir::CommonRenderingLibraryParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::IFileSystemReader*> FileSystemReader;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct LibraryParams : public ::cohtml::LibraryParamsWithExternalRenderingLibrary,
                       public ::renoir::CommonRenderingLibraryParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk48fe4d;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryParams& operator=(LibraryParams const&);
    LibraryParams(LibraryParams const&);
    LibraryParams();
};
#else // @header-generator platform
struct LibraryParams {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
