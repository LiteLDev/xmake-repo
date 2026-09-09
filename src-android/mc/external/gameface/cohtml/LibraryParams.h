#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/LibraryParamsWithExternalRenderingLibrary.h"
#include "mc/external/gameface/renoir/CommonRenderingLibraryParams.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IFileSystemReader; }
// clang-format on

namespace cohtml {

struct LibraryParams : public ::cohtml::LibraryParamsWithExternalRenderingLibrary,
                       public ::renoir::CommonRenderingLibraryParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::IFileSystemReader*> FileSystemReader;
    // NOLINTEND
};

} // namespace cohtml
