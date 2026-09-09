#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/util/cereal_helpers/FileReferenceLoaderMode.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
namespace Core { class Result; }
// clang-format on

namespace CerealHelpers {

class FileReferenceLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager*>                   mResourcePackManager;
    ::ll::TypedStorage<4, 4, ::CerealHelpers::FileReferenceLoaderMode> mMode;
    ::ll::TypedStorage<8, 24, std::vector<Core::Path>>                 pathStack;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                errors;
    // NOLINTEND

public:
    // prevent constructor by default
    FileReferenceLoader& operator=(FileReferenceLoader const&);
    FileReferenceLoader(FileReferenceLoader const&);
    FileReferenceLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FileReferenceLoader(::Core::Path const&);

    MCNAPI ::Core::Result getFileData(::Core::Path const&, std::string&);

    MCNAPI void pushError(std::string&&);

    MCNAPI void pushError(std::string const&);

    MCNAPI ~FileReferenceLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CerealHelpers
