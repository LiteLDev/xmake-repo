#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/util/cereal_helpers/FileReferenceLoaderMode.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ResourcePackManager;
#else // @header-generator platform
namespace Core { class Path; }
#endif // @header-generator platform
namespace Core { class Result; }
// clang-format on

namespace CerealHelpers {

class FileReferenceLoader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ResourcePackManager*>                   mResourcePackManager;
    ::ll::TypedStorage<4, 4, ::CerealHelpers::FileReferenceLoaderMode> mMode;
    ::ll::TypedStorage<8, 24, std::vector<Core::Path>>                 pathStack;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                errors;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnka30d41;
    ::ll::UntypedStorage<4, 4>  mUnk38ae0a;
    ::ll::UntypedStorage<8, 24> mUnk32e7cb;
    ::ll::UntypedStorage<8, 24> mUnk2c5584;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FileReferenceLoader& operator=(FileReferenceLoader const&);
    FileReferenceLoader(FileReferenceLoader const&);
    FileReferenceLoader();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Core::Result getFileData(::Core::Path const& path, ::std::string& outFileData);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CerealHelpers
